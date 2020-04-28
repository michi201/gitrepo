#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# euklides2.py


def nwd_v2(a, b):
    while a > 0:
        a = a % b
        b = b - a
    return b


def nwd_rek(a, b):
    if b == 0:
        return a
    return nwd_rek(b, a % b)

def main(args):
    a = int(input("Podaj liczbe naturalną: "))
    b = int(input("podaj liczbe naturalną: "))
    assert nwd_v2(5, 10) == 5
    assert nwd_v2(33, 11) == 11
    print("NWD({:d}, {:d}) = {:d}".format(a, b, nwd_rek(a, b)))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
