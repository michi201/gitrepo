#!/usr/bin/env python
# -*- coding: utf-8 -*-


def szyfruj(tekst, klucz):
    reszta = len(tekst) % klucz
    if reszta:
        tekst += (klucz - reszta) * "."

    szyfrogram = ""
    for i in range(klucz):
        for j in range(int(len(tekst) / klucz)):
            szyfrogram += tekst[i + j * klucz]

    return szyfrogram


def deszyfruj(szyfrogram, klucz):
    tekst = ""
    for i in range(int(len(szyfrogram) / klucz)):
        for j in range(klucz):
            # print (i + j * klucz, szyfrogram[j + i * klucz])
            tekst += szyfrogram[i + (j * int(len(szyfrogram) / klucz))]
    return tekst


def main(args):
    tekst = input("Podaj tekst: ")
    klucz = int(input("Klucz: "))
    while klucz > len(tekst) / 2:
        klucz = int(input("Klucz: "))

    szyfrogram = szyfruj(tekst, klucz)
    print(szyfrogram)
    print(deszyfruj(szyfrogram, klucz))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
