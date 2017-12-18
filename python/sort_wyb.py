#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sort_wyb.py
#  

import random


def losuj(ileliczb, maksliczb):

    liczby = []  # pusta lista

    ile = 0  # ilość unikalnych liczb

    # for i in range(ileliczb):
    while ile < ileliczb:
        liczba = random.randint(0, maksliczb)
        if liczby.count(liczba) == 0:
            liczby.append(liczba)
            ile += 1

    return liczby


def zamien(a, b):
   # tmp = a;
    a = b
   # b = tmp;
   
   
def sort_wyb(tab, n):
    # selection sort
	tab = []
	print(" ------------- Sortowanie przez wybieranie ---------------")
	for i in range(1, n):
		k = i
		print(i)
		for j in range(i + 1, n):
			#print(j)
			if tab[j] < tab[k]:
				k = j
        
	# zamien(tab[i], tab[k])

def main(args):
    ile = 10
    tab = [ile]
    maksliczb = int(input('Podaj maksymalną liczbe: '))
    print(losuj(ile, maksliczb))
    print(sort_wyb(tab, ile))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
