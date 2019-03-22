/*
 * osoba.cpp 
 */

#include <iostream>
#include <cstdlib>
#include "osoba.h"

Osoba::Osoba() {
    wiek=0;
}

Osoba::Osoba(string i, string n, int w, char p) {
    if (w <= 1930) w = 1990;
    imie = i;
    nazwisko = n;
    wiek = w;
    plec = p;
}

void Osoba::dodaj() {
    cout << "Dodaj osobę:" << endl;
    cout << "Imię: "; cin >> imie;
    cout << "Nazwisko: "; cin >> nazwisko;
    cout << "wiek: "; cin >> wiek;
    cout << "plec: "; cin >> plec;
}

void Car::dane() {
    cout << endl;
    cout << "dane osoby:" << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Płeć " << plec << endl;
}
