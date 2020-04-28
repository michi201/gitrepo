#!/usr/bin/env python
# -*- coding: utf-8 -*-


import sqlite3


def kwerenda1(cur):
    cur.execute("""
        SELECT nazwisko, imie1, pol FROM nazwiska
        INNER JOIN oceny ON nazwiska.nr_ucznia=oceny.nr_ucznia
    """)
    # SELECT nazwisko, imie1, dzien, miesiac, rok FROM nazwiska
    # INNER JOIN dane_osobowe  ON nazwiska.nr_ucznia=dane_osobowe.nr_ucznia
    # WHERE nazwiska.nr_ucznia=
    #  (SELECT nr_ucznia FROM nazwiska
    #   WHERE nazwisko="German" AND imie1="Dariusz")
    # SELECT * FROM nazwiska WHERE nazwisko LIKE 'G%'
    wyniki = cur.fetchall()  # pobranie wszytkich rekordów na raz
    for row in wyniki:
        print(tuple(row))


def main(args):
    # KONFIGURACJA
    baza_nazwa = 'szkola'
    tabele = ["nazwiska", "dane_osobowe", "oceny"]
    #############

    con = sqlite3.connect(baza_nazwa + '.db')
    cur = con.cursor()      # obiekt tzw. kursora

    kwerenda1(cur)

    con.commit()
    con.close()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
