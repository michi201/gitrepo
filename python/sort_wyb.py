#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sort_wyb.py
#

import random


def losuj(liczby, ileliczb, maksliczb):

    ile = 0  # ilość unikalnych liczb

    # for i in range(ileliczb):
    while ile < ileliczb:
        liczba = random.randint(0, maksliczb)
        if liczby.count(liczba) == 0:
            liczby.append(liczba)
            ile += 1

    return liczby


def sort_wyb(tab):
    # selection sort
    print(" ------------- Sortowanie przez wybieranie ---------------")
    for i in range(len(tab)):
        k = i
        for j in range(i + 1, len(tab)):
            if tab[j] < tab[k]:
                k = j
        tab[i], tab[k] = tab[k], tab[i]
    return tab


def main(args):
    ile = 10
    tab = []
    maksliczb = int(input('Podaj maksymalną liczbe: '))
    print(losuj(tab, ile, maksliczb))
    print(sort_wyb(tab))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
