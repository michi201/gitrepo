#!/usr/bin/env python
# -*- coding: utf-8 -*-


import sqlite3


def kwerenda1(cur):
    cur.execute("""
        WITH srednie AS (
            SELECT nazwisko, AVG(ocena) AS srednia, klasa FROM uczniowie
            INNER JOIN oceny ON uczniowie.id=oceny.id_uczen
            INNER JOIN klasy ON uczniowie.id_klasa=klasy.id
            GROUP BY id_uczen
            ORDER BY srednia DESC
        ) SELECT AVG(srednia), klasa FROM srednie
          GROUP BY klasa
    """)
    # WITH srednie AS (
    # SELECT nazwisko, imie, AVG(ocena) AS srednia FROM uczniowie
    # INNER JOIN oceny ON uczniowie.id=oceny.id_uczen
    # GROUP BY id_uczen
    # ORDER BY srednia DESC
    # ) SELECT COUNT(imie), nazwisko, srednia FROM srednie
    # WHERE srednia > 3.8
    #
    # SELECT klasa, COUNT(nazwisko) FROM klasy
    # ORDER BY klasy ASC/DESC  (sortowanie rosnąco/malejąco)
    # SELECT klasa, nazwisko, imie FROM klasy
    # INNER JOIN uczniowie ON klasy.id=uczniowie.id_klasa
    # WHERE klasa="1A"
    # SELECT * FROM nazwiska WHERE nazwisko LIKE 'G%'
    wyniki = cur.fetchall()  # pobranie wszytkich rekordów na raz
    for row in wyniki:
        print(tuple(row))


def main(args):
    # KONFIGURACJA
    baza_nazwa = 'uczniowie'
    tabele = ["uczniowie", "klasy", "przedmioty", "oceny"]
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
