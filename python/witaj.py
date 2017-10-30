#!/usr/bin/env python
# -*- coding: utf-8 -*-

osoba = input("Jak się nazywasz? ")
wiek = input("ile masz lat? ")
print("Witaj, ", osoba, "!")
print("Urodziłeś się w: ", 2017 - int(wiek))

rok_pythona = 1991
wiek_pythona = 2017 - rok_pythona

if wiek_pythona > int(wiek):
    print ("Python jest starszy")
elif wiek_pythona < int(wiek):
    print ("Ty jesteś starszy")
else:
    print ("Jesteście w tym samym wieku" )
