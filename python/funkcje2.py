#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  funkcje2.py

# w funkcjach zmienne nie wiążące się z innymi zmiennymi w innych funkcjach
def sumuj(x, y):
    return x + y
    
def odejmij(c, d):
    return c - d

def main(args):
    a = int(input("Podaj liczbe: "))
    b = int(input("Podaj liczbe: "))
    
    
    print("Suma: ", sumuj(a,b))
    print("Różnica: ", odejmij(a,b))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
