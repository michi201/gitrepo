#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  reszta.py


def PobierzNominaly():
    nominaly = set([200, 100, 50, 20, 10, 5, 2, 1])
    n = int(input("Podaj nominał lub 0 żeby zakończyć: "))
    listaNm = []
    while n > 0:
        if n in nominaly:
            listaNm.append(n)
        else:
            print("Błąd")
        n = int(input("Podaj nominał lub 0 żeby zakończyć: "))
    listaNm.sort(reverse=True)  # sortowanie malejące
    return listaNm


def wydajReszte1(r, l):
    i = 0  # indeks nominału
    while r > 0:
        if r >= l[i]:
            ileNm = int(r / l[i])
            r -= ileNm * l[i]
            print("{} x {} zł".format(ileNm, l[i]))
        i += 1


def wydajReszte2(reszta, listaNm):
    i = 0  # indeks nominału
    liczbaNm = len(listaNm)  # liczba nominałów
    while reszta > 0 and i < liczbaNm:
        while i < liczbaNm and reszta < listaNm[i]:
            i += 1
        if i < liczbaNm and reszta >= listaNm[i]:
            nominal = listaNm[i]
            ileNm = int(reszta / nominal)
            if ileNm > listaNm.count(nominal):
                ileNm = listaNm.count(nominal)
            reszta -= ileNm * nominal
            for j in range(ileNm):
                listaNm.remove(nominal)
                liczbaNm -= 1
            i = 0
            print("{} x {}".format(ileNm, nominal))
    if reszta > 0:
        print("Brak nominałlów do wydania {} zł".format(reszta))


def main(args):
    listaNm = PobierzNominaly()
    reszta = int(input('Podaj resztę: '))
    # wydajReszte1(reszta, listaNm)
    wydajReszte2(reszta, listaNm)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
