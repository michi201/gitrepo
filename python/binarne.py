#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import floor


def wyszuk_liniowe(lista, el):
    for i in range(0, len(lista)):
        if lista[i] == el:
            return i


def wyszuk_bin_it(lista, el):
    lewy = 0
    prawy = len(lista) - 1
    while lewy < prawy:
        srodek = floor((lewy + prawy) / 2)
        if el <= lista[srodek]:
            prawy = srodek
        else:
            lewy = srodek + 1
    if lista[lewy] == el:
        return lewy
    return -1


def wyszuk_bin_rek(lewy, prawy, lista, el):
    if lewy > prawy:
        return -1
    srodek = floor((lewy + prawy) / 2)
    if el == lista[srodek]:
        return srodek
    if el < lista[srodek]:
        return wyszuk_bin_rek(lewy, srodek - 1, lista, el)
    else:
        return wyszuk_bin_rek(srodek + 1, prawy, lista, el)


def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9, -4]
    lista.sort()
    print(lista)
    el = 4
    print(wyszuk_bin_it(lista, el))
    print(wyszuk_bin_rek(0, len(lista), lista, el))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
