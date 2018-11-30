#!/usr/bin/env python
# -*- coding: utf-8 -*-

from uczniowie_model import *


def kw01():
    # SELECT * FORM uczen WHERE imie LIKE 'G%' - SQL
    # query = Uczen.select().where(Uczen.imie == "Rafał")
    # query = Uczen.select().where(Uczen.imie == "Rafał").count
    # print(query)
    query = (Uczen
             .select()
             .where(Uczen.egz_mat.between(30, 35))
             .order_by(Uczen.egz_mat.asc())
             )
    for obj in query:
        print(obj.nazwisko, obj.imie, obj.egz_mat)


def kw02():
    # uczniowie z nazwiskoiem na litere B i ich oceny
    query = (Ocena
             .select(Ocena.ocena, Ocena.uczen.nazwisko)
             .join(Uczen)
             .where(Ocena.uczen.nazwisko.startswith("B"))
             )
    for obj in query:
        print(obj.uczen.nazwisko, obj.ocena)


def kw03():
    # po ile ocen maja uczniowie wg ilosci
    query = (Ocena
             .select(Ocena.uczen.nazwisko, fn.Count(Ocena.ocena).alias("ile"))
             .join(Uczen)
             .group_by(Ocena.uczen.nazwisko)
             .order_by(SQL("ile").asc())
             )
    for obj in query:
        print(obj.uczen.nazwisko, obj.ile)


def main(args):
    baza.connect()

    # kw01()
    # kw02()
    kw03()

    baza.close()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
