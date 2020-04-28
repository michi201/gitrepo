#!/usr/bin/env python
# -*- coding: utf-8 -*-


from datetime import date


class Samochod():

    def __init__(self, marka, model, rok_produkcji, nadwozie):
        self.marka = marka
        self.model = model
        self.rok_produkcji = rok_produkcji
        self.nadwozie = nadwozie

    def wiek(self, rok_produkcji):
        return date.today().year - self.rok_produkcji


fiacik = Samochod("Fiat", "Tipo", 2005, "sedan")
print(fiacik.marka, fiacik.model, fiacik.rok_produkcji,
      fiacik.nadwozie, fiacik.wiek(2005))
