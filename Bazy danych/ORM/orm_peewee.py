#!/usr/bin/env python
# -*- coding: utf-8 -*-


import os
from peewee import *


baza_nazwa = "test.db"
baza = SqliteDatabase(baza_nazwa)


# MODELE #


class Klasa(Model):
    nazwa = CharField(null=False)  # pole znakowe
    roknaboru = IntegerField(default=0)  # pole wartości całkowitej
    rokmatury = IntegerField(default=0)

    class Meta:
        database = baza


class Uczen(Model):
    imie = CharField(null=False)
    nazwisko = CharField(null=False)
    plec = BooleanField()
    klasa = ForeignKeyField(Klasa, related_name="uczniowie")
    # pole typu klucz obcy

    class Meta:
        database = baza


class Wynik(Model):
    egz_hum = FloatField(default=0)  # pole wyliczeniowe
    egz_mat = FloatField(default=0)
    egz_jez = FloatField(default=0)
    uczen = ForeignKeyField(Uczen, related_name="wyniki")

    class Meta:
        database = baza


def main(args):
    if os.path.exists(baza_nazwa):
        os.remove(baza_nazwa)
    baza.connect()  # łączenie z bazą
    baza.create_tables([Klasa, Uczen, Wynik])  # tworzenie tabel
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
