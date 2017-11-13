#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py
  
def potega_it(x, n):

    float wynik = 1
    int i = 1
    float x
    int ns
    for i in range(n):
    {
        wynik = wynik * x
    }
    return wynik


def main(args):
    x = float(input("Podaj podstawe potęgi: "))
    n = int(input("Podaj wykładnik potęgi: "))
    print("Wynik: ")
    print(potega_it(x, n))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
