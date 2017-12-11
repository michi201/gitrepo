#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# ciag_fibonacciego.py


def fib_iter(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    a, b = (0, 1)
    print(a)
    for i in range(1, n):
        a, b = b, a + b
        # to co wyżej w c++
        # tmp = b
        # b = a + b
        # a = tmp
        print(a, " ", b, " ", b / a)
    return b


# fib_rek(n) = 1 dla n {0, 1}
# fib_rek(n) = fib_rek(n-1) + fib_rek(n-2) dla n > 1
def fib_rek(n):
    if n < 2:
        return 1
    return fib_rek(n - 1) + fib_rek(n - 2)


def main(args):
    n = int(input("Numer wyrazu w ciągu: "))
    # assert fib_iter(0) == 0
    # assert fib_iter(1) == 1
    # assert fib_iter(2) == 1
    # assert fib_iter(3) == 2
    # assert fib_iter(4) == 3
    # assert fib_iter(5) == 5
    print("Wyraz {:d} = {:d}".format(n, fib_iter(n)))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
