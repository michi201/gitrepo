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
    id = IntegerField(null=False)
    klasa = CharField(null=False)
    rok_naboru = IntegerField(null=False)
    rok_matury = IntegerField(null=False)


class Uczen(KlasaBaza):
    id = IntegerField(null=False)
    imie = CharField(null=False)
    nazwisko = CharField(null=False)
    plec = BooleanField()
    id_klasa = IntegerField(null=False)
    egz_hum = DecimalField(null=False, default=0)
    egz_mat = DecimalField(null=False, default=0)
    egz_jez = DecimalField(null=False, default=0)
    id_klasa = ForeignKeyField(Klasa)


class Przedmiot(KlasaBaza):
    id = IntegerField(null=False)
    przedmiot = CharField(null=False)
    imie_naucz = CharField(null=False)
    nazwisko_naucz = CharField(null=False)
    plec_naucz = BooleanField()


class Ocena(KlasaBaza):
    id = IntegerField(null=False)
    data = DateField()
    id_uczen = IntegerField(null=False)
    id_przedmiot = IntegerField(null=False)
    ocena = DecimalField(null=False)
    id_uczen = ForeignKeyField(Uczen)
    id_przedmiot = ForeignKeyField(Przedmiot)


def main(args):
    if os.path.exists(baza_nazwa):
        os.remove(baza_nazwa)
    baza.connect()  # łączenie z bazą
    baza.create_tables([Klasa, Uczen, Przedmiot, Ocena])
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
