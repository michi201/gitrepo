#!/usr/bin/env python
# -*- coding: utf-8 -*-


def szyfruj_cezar(tekst, klucz):
    klucz = klucz % 26
    szyfrogram = ""
    for znak in tekst:
        if ord(znak) >= 65 and ord(znak) <= 90:
            znak = znak.upper()
        if ord(znak) >= 97 and ord(znak) <= 122:
            znak = znak.lower()
        ascii = ord(znak) + klucz
        if ord(znak) == 32:
            ascii -= klucz
        if ascii > 90 and ascii < 97 or ascii > 122:
            ascii -= 26
        szyfrogram += chr(ascii)
    return szyfrogram


def deszyfruj(szyfrogram, klucz):
    klucz = klucz % 26
    deszyfr = ""
    for znak in szyfrogram:
        if ord(znak) >= 65 and ord(znak) <= 90:
            znak = znak.upper()
        if ord(znak) >= 97 and ord(znak) <= 122:
            znak = znak.lower()
        ascii = ord(znak) - klucz
        if ascii < 65 or ascii < 97 and ascii > 90:
            ascii += 26
        if ord(znak) == 32:
            ascii -= 26
            ascii += klucz
        deszyfr += chr(ascii)
    return deszyfr


def main(args):
    tekst = input("Podaj tekst: ")
    klucz = int(input("Klucz: "))

    szyfrogram = szyfruj_cezar(tekst, klucz)
    print(szyfrogram)
    print(deszyfruj(szyfrogram, klucz))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
