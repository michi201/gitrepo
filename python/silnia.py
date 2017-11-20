#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  silnia.py
  
def silnia(n):    
    wynik = 1
    for i in range(2, n+1):
        wynik = wynik * i
        
    return wynik


def main(args):
    n = int(input("Podaj wykładnik silni: "))
    assert type(n) == int
    assert silnia(0) == 1
    assert silnia(5) == 120 
    print('Wynik: ', silnia(n))
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
