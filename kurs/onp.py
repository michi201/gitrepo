#!/usr/bin/env python
# -*- coding: utf-8 -*-


from stos_obj import Stos


def jesli_litera(onp):
    for z in onp:
        if z.isalpha():  # sprawdzanie czy podany znak jest literą
            return False
    return True


def main(args):
    stos = Stos()
    onp = input("Podaj wyr. ONP,oddzielając operandy i operatory spacjami: ")
    # 3 3 7 + * = 30
    if not jesli_litera(onp):
        print("Błąd wyrażenia")
        return 0
    onp = onp.split(" ")

    for el in onp:
        if el.isdigit():
            stos.push(el)
        else:
            a = stos.pop()
            b = stos.pop()
            stos.push(str(eval(b + el + a)))
    print("Wynik: ", stos.pop())
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
