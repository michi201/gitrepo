// car.h
#include <iostream>
#include <cstdlib>
#include <string>

#ifndef __CAR_H_
#define __CAR_H_

using namespace std;

class Car {
    private:
        string marka;
        string model;
        int rocznik;
        int przebieg;
        int ileosob;
        
        // Osoba osoby[3];
    public:
        Car(); // konstruktor
        Car(string, string, int, int); // konstruktor
        void dodaj();
        void dane();
        void wsiadz();
        int pasazerowie();
};

#endif
