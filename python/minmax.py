#!/usr/bin/env python
# -*- coding: utf-8 -*-

import random


def losuj(ileliczb, maksliczb):

    liczby = []  # pusta lista

    ile = 0  # ilość unikalnych liczb

    # for i in range(ileliczb):
    while ile < ileliczb:
        liczba = random.randint(0, maksliczb)
        if liczby.count(liczba) == 0:
            liczby.append(liczba)
            ile += 1

    print(liczby)
    return liczby


def minimum(lista):
    # wyszukiwanie minimum
    min = lista[0]
    for i, el in enumerate(lista):
    return 0

def main(args):
    lista = losuj(20, 50)
    print("Min: ", minium(lista))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
