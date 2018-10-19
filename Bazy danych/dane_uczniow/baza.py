#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza.py

import csv
import sqlite3


def czytaj_dane(plik, separator=","):
    dane = []
    with open(plik, newline='', encoding='utf-8') as plikcsv:
        tresc = csv.reader(plikcsv, delimiter=separator)
        for rekord in tresc:
            dane.append(rekord)
    return dane


def ile_kolumn(cur, tab):
    # zlicza i zwraca liczbe kolumn w podanej tabeli
    i = 0
    for kolumn in cur.execute("PRAGMA table_info('" + tab + "')"):
        # wydobycie informacji o podanej tabeli
        i += 1
    return i


def main(args):
    # KONFIGURACJA
    baza_nazwa = 'szkola'
    tabele = ["nazwiska", "dane_osobowe", "oceny"]
    rozszerzenie = '.txt'
    naglowki = True
    #############
    con = sqlite3.connect(baza_nazwa + '.db')
    cur = con.cursor()      # obiekt tzw. kursora
    with open(baza_nazwa + '.sql', 'r') as plik:
        cur.executescript(plik.read())

    for tab in tabele:
        ile = ile_kolumn(cur, tab)  # liczba kolumn w tabeli
        dane = czytaj_dane(tab + rozszerzenie, separator=',')
        ile_d = len(dane[0])

        if ile > ile_d:
            dane2 = []  # tymczasowa lista
            for r in dane:
                r.insert(0, None)
                dane2.append(r)
            dane = dane2

        if naglowki:
            dane.pop(0)  # usuwamy rekord z nagłówkami kolumn
        ile = len(dane[0])
        cur.executemany('INSERT INTO ' + tab + " VALUES('" +
                        ','.join(['?'] * ile) + "')", dane)

    con.commit()
    con.close()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
