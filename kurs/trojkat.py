#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  trojkat.py


from math import sqrt


def main(args):
    a, b, c = eval(input('Podaj boki trójkąta oddzielone przecinkami: '))
    print('Podano boki: {}, {}, {}'.format(a, b, c))
    trojkat = False
    if a + b > c:
        if a + c > b:
            if b + c > a:
                trojkat = True

    if trojkat:
        print('Da się zbudować trójkąt!')
        if a**2 + b**2 == c**2 or \
           a**2 + c**2 == b**2 or \
           b**2 + c**2 == a**2:
            print("Trójkat prostokątny")
        else:
            print("Trójkat nieprostokątny")
        p = (a + b + c) / 2
        pole = sqrt(p * (p - a) * (p - b) * (p - c))
        print('Pole {:.4f}'.format(pole))
    else:
        print('Nie da się!')
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
