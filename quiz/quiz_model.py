#!/usr/bin/env python
# -*- coding: utf-8 -*-


import os
from peewee import *


baza_nazwa = "quiz.db"
baza = SqliteDatabase(baza_nazwa)


# MODELE #

class QuizBaza(Model):
    class Meta:
        database = baza


class Kategoria(QuizBaza):
    kategoria = CharField(null=False)


class Pytanie(QuizBaza):
    pytanie = CharField(null=False)
    kategoria = ForeignKeyField(Kategoria, related_name='pytania')


class Odpowiedz(QuizBaza):
    odpowiedz = CharField(null=False)
    pytanie = ForeignKeyField(Pytanie, related_name='odpowiedzi')
    odpok = BooleanField(default=0)


def main(args):
    if os.path.exists(baza_nazwa):
        os.remove(baza_nazwa)
    baza.connect()  # łączenie z bazą
    baza.create_tables([Kategoria, Pytanie, Odpowiedz])
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
