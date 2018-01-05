#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import floor


def wyszuk_liniowe(lista, el):
    for i in range(0, len(lista)):
        if lista[i] == el:
            return i


def wyszuk_binarne(lista, el):
    lewy = 0
    prawy = len(lista) - 1
    while lewy < prawy:
        srodek = floor((lewy + prawy) / 2)
        if el <= lista[srodek]:
            prawy = srodek
        else:
            lewy = srodek + 1
    return -1


def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9, -4]
    el = 3
    print(wyszuk_binarne(lista, el))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
