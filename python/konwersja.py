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
    """Funkcja konwertuje podaną liczbe w systemie o podanej podstawie
    na system dziesiętny"""

     # 745(8) = 7 * 8^2 + 4 * 8^1 + 5

    liczba10 = 0  # wartość dziesiętna liczby
    potega = len(liczba) - 1
    for cyfra in liczba:
        if not cyfra.isdigit():
            liczba10 += (ord(cyfra.upper()) - 55) * (podstawa ** potega)
        else:
            liczba10 += int(cyfra) * (podstawa ** potega)
        potega -= 1
    return liczba10


def other2dec():
    """ Funkcja pobiera od uzytkownika podstawe i liczbe """
    liczba = input("Podaj liczbe: ")
    podstawa = int(input("Podaj podstawe: "))
    for i in liczba:
        if i.isdigit():
            cyfra = int(i)
        else:
            cyfra = ord(i.upper()) - 55
        if cyfra > podstawa - 1:

            print("Podałeś niedopuszczalną liczbę!")
    print("Wynik konwersji: {}(10)".format(konwersja2(liczba, podstawa)))


def main(args):
    print("Zamiana liczby dziesiętnej na liczbę o podanej podstawie "
          "<2;16>")
    dec2other()
    print("Zamiana liczby o podanej podstawie <2;16> na liczbe  "
            "dziesiętną")
    other2dec()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
