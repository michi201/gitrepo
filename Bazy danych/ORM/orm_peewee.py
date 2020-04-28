#!/usr/bin/env python
# -*- coding: utf-8 -*-


import os
from peewee import *


baza_nazwa = "test.db"
baza = SqliteDatabase(baza_nazwa)


# MODELE #

class KlasaBaza(Model):
    class Meta:
        database = baza


class Klasa(KlasaBaza):
    nazwa = CharField(null=False)  # pole znakowe
    roknaboru = IntegerField(default=0)  # pole wartości całkowitej
    rokmatury = IntegerField(default=0)


class Uczen(KlasaBaza):
    imie = CharField(null=False)
    nazwisko = CharField(null=False)
    plec = BooleanField()
    klasa = ForeignKeyField(Klasa, related_name="uczniowie")
    # pole typu klucz obcy


class Wynik(KlasaBaza):
    egz_hum = FloatField(default=0)  # pole wyliczeniowe
    egz_mat = FloatField(default=0)
    egz_jez = FloatField(default=0)
    uczen = ForeignKeyField(Uczen, related_name="wyniki")


def main(args):
    if os.path.exists(baza_nazwa):
        os.remove(baza_nazwa)
    baza.connect()  # łączenie z bazą
    baza.create_tables([Klasa, Uczen, Wynik])  # tworzenie tabel

    klasa3A = Klasa(nazwa="3A", roknaboru=2010, rokmatury=2013)
    klasa3A.save()  # zapisanie obiektu w bazie

    ucz1 = Uczen(imie="Michał", nazwisko="Wołodyjowski", plec=False,
                 klasa=klasa3A)
    ucz1.save()

    kl1A = Klasa(nazwa="1A", roknaboru=2009, rokmatury=2012)
    kl1A.save()

    ucz2 = Uczen(imie="Anna", nazwisko="Gacek", plec=True, klasa=kl1A)
    ucz2.save()

    ucz3 = Uczen(imie="Jan", nazwisko="Zioło", plec=False, klasa=kl1A)
    ucz3.save()

    # zapytania, czyli kwerendy w ORM
    uczniowie = Uczen.select()
    for u in uczniowie:
        print(u.id, u.nazwisko, u.klasa.nazwa)

    klasy = Klasa.select()
    for k in klasy:
        for u in k.uczniowie:
            print(u.nazwisko)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
