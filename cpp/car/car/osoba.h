// car.h
#include <iostream>
#include <cstdlib>

#ifndef __OSOBA_H_
#define __OSOBA_H_

using namespace std;

class Osoba {
    private:
        string imie;
        string nazwisko;
        int wiek;
        char plec;
        // Osoba osoby[3];
        int rozmiar = 50;
    public:
        Osoba();  // konstruktor
        Osoba(string, string, int, char); // konstruktor

};
#endif
