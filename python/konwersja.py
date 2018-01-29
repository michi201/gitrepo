#!/usr/bin/env python
# -*- coding: utf-8 -*-


def konwersja1(liczba10, podstawa):
    """Funkcja zamienia liczbe dziesiętną na system o podanej podstawie"""
    liczba = []  # lista reszt dzielenia modulo
    while liczba10 != 0:
        reszta = liczba10 % podstawa  # obliczanie reszty
        if reszta > 9:
            reszta = chr(reszta + 55)  # kod ASCII
        liczba.append(str(reszta))
        liczba10 = int(liczba10 / podstawa)

    liczba.reverse()  # odwrócenie kolejności elementów
    return "".join(liczba)  # złączenie elementów listy w 1 ciąg tekstowy


def dec2other():
    """Funkcja zmienia liczbe dziesietną na system o podanej podstawie"""
    liczba = int(input("Podaj liczbe: "))
    podstawa = int(input("Podaj podstawe: "))
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawe: "))
    print("Wynik konwersji: {}(10) = {}({})".format(
          liczba, konwersja1(liczba, podstawa), podstawa))


def konwersja2(liczba, podstawa):
    """Funkcja konwertuje podaną liczbe w systemie o podanej podstawie na system dziesiętny"""


def other2dec():
    """ Funkcja pobiera od uzytkownika podstawe i liczbe """

    print(konwersja2())


def main(args):
    print("Zamiana liczby dziesiętnej na liczbę o podanej podstawie "
          "<2;16> lub odwrotnie")
    dec2other()
    # othet2dec()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
