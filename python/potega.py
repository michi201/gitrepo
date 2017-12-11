#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py


def potega_it(x, n):
    i = 1
    wynik = 1
    while i <= n:
        wynik = wynik * x
        i = i + 1
    return wynik


# potega_rek(x, 0) = 1 dla x różnego od 0
# potega_rek(x, n) = potega_rek(x, n-1) * x dla n = N+
def potega_rek(x, n):
    if x == 0:
        return 0
    elif n == 0:
        return 1
    return potega_rek(x, n - 1) * x


def main(args):
    x = float(input("Podaj podstawe potęgi: "))
    n = int(input("Podaj wykładnik potęgi: "))
    assert type(n) == int
    assert potega_it(1, 1) == 1
    assert potega_it(2, 1) == 2
    assert potega_it(2, 3) == 8
    assert potega_it(5, 2) == 25
    print('Wynik: ', potega_rek(x, n))
    return 0


if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
