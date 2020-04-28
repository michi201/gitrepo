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


def sort_babel(tab):
    # bouble sort
    print(" ------------- Sortowanie przez bąbelkowanie ---------------")
    for i in range(len(tab)):
        for j in range(len(tab) - 1):
            if tab[j] > tab[j + 1]:
                tab[j], tab[j + 1] = tab[j + 1], tab[j]
    return tab


def main(args):
    ile = 10
    tab = [ile]
    maksliczb = int(input('Podaj maksymalną liczbe: '))
    print(losuj(tab, ile, maksliczb))
    print(sort_babel(tab))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
