#!/usr/bin/env python
# -*- coding: utf-8 -*-

a, b = 5, 10  # zmienna globalna, zasieg globalny, przestrzeń modułu
print("5: ", a + b)
# zminna (variable) globalna
# zasięg (global) globalny
# przestrzeń nazw (namespace) modułu


def sumuj1():  # nowa przestrzeń nazw, przestrzeń funkcji
    print("12: ", a + b)


def main(args):
    global a, b
    a, b = 2, 3  # zmienne lokalne, zasięg lokalny, przestrzeń funkcji
    print('17: ', a + b)
    sumuj1()  # wywołanie funkcji
    return 0


def odejmij(x, y):
    print(x - y)
    x, y = 4, 3


def odejmij2(lista):
    lista.append(lista[0] - lista[1])


def main2(args):
    # a, b = 2, 3
    # print(a - b)
    # odejmij(a, b)
    # print(a - b)
    li = [3, 4]
    odejmij2(li)
    print(li)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main2(sys.argv))
