#!/usr/bin/env python
# -*- coding: utf-8 -*-


from stos_obj import Stos


class ONPKlasa(Stos):
    def __init__(self, onp_str="", a_str=""):
        super().__init__(10)  # wywołanie konstruktora
        # wywołanie z pliku stos_obj def __init__
        if not self.jesli_litera(onp_str):
            print("Błąd wyrażenia")
            onp_str = ""
        self.onp_str = onp_str
        self.a_str = a_str
        self.log = []
        self.wynik = None

    def jesli_litera(self, onp):
        for z in onp:
            if z.isalpha():  # sprawdzanie czy podany znak jest literą
                return False
        return True

    def oblicz_onp(self):
        onp = self.onp_str.split(" ")

        for el in onp:
            if el.isdigit():
                self.push(el)
            else:
                a = self.pop()
                b = self.pop()
                self.log.append(str(b + el + a))
                self.push(str(eval(b + el + a)))
        self.wynik = self.pop()

    def p(self, operator):  # funkcja pomocnicza do a2onp (priorytety znaków)
        if operator == "(":
            return 0
        if operator == "+" or operator == "-":
            return 1
        if operator == "*" or operator == "/":
            return 2
        if operator == "**":
            return 3

    def a2onp(self):  # zamiana zapisu algebraicznego na ONP
        operatory = set(["+", "-", "*", "/", "**"])  # zamiana na zbiór
        for znak in self.a_str:
            print("Badany znak: ", znak)
            if znak == " ":
                continue
            elif znak == "(":
                self.push(znak)
            elif znak == ")":
                while self.peek() != "(":
                    # "podglądanie" ostatniego znaku ze stostu
                    self.onp_str += self.pop() + " "
                self.pop()  # usuniecie nawiazu otwierającego ze stosu
            elif znak in operatory:
                while not self.isEmpty():  # dopóki stos nie jest pusty
                    if self.p(znak) == 3 or self.p(znak) > self.p(self.peek()):
                        break
                    self.onp_str += self.pop()
                self.push(znak)
            else:
                self.onp_str += znak + " "
        while self.peek():
            self.onp_str += self.pop() + " "
        self.onp_str.strip()  # metoda usuwająca spacje


def main(args):
    # onp = input("Podaj wyr. ONP,oddzielając operandy i operatory spacjami: ")
    # o1 = ONPKlasa(onp)
    # o1.oblicz_onp()
    # print("Obliczenia: ", o1.log)
    # print("Wynik: ", o1.wynik)

    o2 = ONPKlasa(a_str="(4 + 5) * 6")
    o2.a2onp()
    print(o2.onp_str)
    print("Obliczenia: ", o2.log)
    print("Wynik: ", o2.wynik)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
