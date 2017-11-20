#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# euklides.py


def nwd_v1(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a


def main(args):
    a = int(input("Podaj liczbe naturalną: "))
    b = int(input("podaj liczbe naturalną: "))
    assert nwd_v1(5, 10) == 5
    assert nwd_v1(33, 11) == 11
    print("NWD({:d}, {:d}) = {:d}".format(a, b, nwd_v1(a, b)))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
