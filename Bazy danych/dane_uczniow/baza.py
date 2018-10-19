#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza.py

import csv


def czytaj_dane(plik, separator=","):
    dane = []
    with open(plik, newline='', encoding='utf-8') as plikcsv:
        tresc = csv.reader(plikcsv, delimiter=separator)
        for rekord in tresc:
            dane.append(rekord)
    print(dane)


def main(args):
    czytaj_dane("nazwiska.txt", ' ')
    czytaj_dane("dane-osobowe.txt", '\t')
    czytaj_dane("oceny.txt", ' ')
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
