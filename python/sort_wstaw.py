#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sort_wyb.py
#

import random
from math import floor


def losuj(liczby, ileliczb, maksliczb):

    ile = 0  # ilość unikalnych liczb

    # for i in range(ileliczb):
    while ile < ileliczb:
        liczba = random.randint(0, maksliczb)
        if liczby.count(liczba) == 0:
            liczby.append(liczba)
            ile += 1

    return liczby


def sort_wstaw(tab):
    # insert sort
    print(" ------------- Sortowanie przez wstawianie ---------------")
    for i in range(1, len(tab)):
        el = tab[i]
        k = i - 1
        while k >= 0 and tab[k] > el:  # wyzsukiwanie pozycji
            tab[k + 1] = tab[k]  # przesuwanie elementów
            k = k - 1
        tab[k + 1] = el
    return tab


def szukaj_bin(lewy, prawy, lista, el):
    """wersja liniowa wyszukiwania binarnego
    wyszukujemy indeks do wstawiania elementu"""
    while lewy < prawy:
        srodek = floor((lewy + prawy) / 2)
        if el <= lista[srodek]:
            prawy = srodek
        else:
            lewy = srodek + 1
    return lewy


def sort_wstaw_bin(lista):
    print(" ------------- Sortowanie przez wstawianie binarne ---------------")
    for i in range(1, len(lista)):
        el = lista[i]
        k = szukaj_bin(0, i, lista, el)  # wyszuk. bin. indeksu do wstawiania
        print(k)
        lista = lista[:k] + [el] + lista[k:i] + lista[i + 1:]
        print(lista)
    return lista


def main(args):
    ile = 10
    tab = [ile]
    maksliczb = int(input('Podaj maksymalną liczbe: '))
    print(losuj(tab, ile, maksliczb))
    sort_wstaw_bin(tab)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
