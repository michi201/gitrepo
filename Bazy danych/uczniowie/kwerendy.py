#!/usr/bin/env python
# -*- coding: utf-8 -*-


import sqlite3


def kwerenda1(cur):
    cur.execute("""
        SELECT klasa, COUNT(nazwisko) AS ilu FROM klasy
        INNER JOIN uczniowie ON klasy.id=uczniowie.id_klasa
        GROUP BY klasa
        ORDER BY ilu DESC
    """)
    # SELECT klasa, COUNT(nazwisko) FROM klasy
    # ORDER BY klasy ASC  (sortowanie rosnąco)
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
