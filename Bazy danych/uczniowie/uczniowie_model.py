#!/usr/bin/env python
# -*- coding: utf-8 -*-


import os
from peewee import *


baza_nazwa = "uczniowie_orm.db"
baza = SqliteDatabase(baza_nazwa)


# MODELE #

class KlasaBaza(Model):
    class Meta:
        database = baza


class Klasa(KlasaBaza):
    klasa = CharField(null=False)
    rok_naboru = IntegerField(default=0)
    rok_matury = IntegerField(default=0)


class Uczen(KlasaBaza):
    imie = CharField(null=False)
    nazwisko = CharField(null=False)
    plec = IntegerField()
    klasa = ForeignKeyField(Klasa, related_name='uczniowie')
    egz_hum = DecimalField(default=0)
    egz_mat = DecimalField(default=0)
    egz_jez = DecimalField(default=0)


class Przedmiot(KlasaBaza):
    przedmiot = CharField(null=False)
    imie_naucz = CharField(null=False)
    nazwisko_naucz = CharField(null=False)
    plec_naucz = IntegerField()


class Ocena(KlasaBaza):
    datad = DateField()
    uczen = ForeignKeyField(Uczen, related_name='oceny')
    przedmiot = ForeignKeyField(Przedmiot, related_name='oceny')
    ocena = DecimalField(null=False)


def main(args):
    if os.path.exists(baza_nazwa):
        os.remove(baza_nazwa)
    baza.connect()  # łączenie z bazą
    baza.create_tables([Klasa, Uczen, Przedmiot, Ocena])
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
