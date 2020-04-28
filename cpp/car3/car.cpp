/*
 * car.cpp
 * 
 */


#include <iostream>
#include <cstdlib>
#include "car.h"
#include <string>


Car::Car() {
    rocznik=przebieg=0;
}


Car::Car(string ma, string mo, int ro, int pr) {
    if (ro <= 1970) ro = 1990;
    marka = ma;
    model = mo;
    rocznik = ro;
    przebieg= pr;
}


void Car::dodaj() {
    cout << "Podaj markę samochodu: " << endl;
    cin >> marka;
    cout << "Podaj model samochodu: " << endl;
    cin >> model;
    cout << "Podaj rocznik samochodu: " << endl;
    cin >> rocznik;
    cout << "Podaj przebieg samochodu: " << endl;
    cin >> przebieg;
}


void Car::dane() {
    cout << "Dane samochodu :" << endl;
    cout << "Marka: " << marka << endl;
    cout << "Model :" << model << endl;
    cout << "Rocznik:" << rocznik << endl; 
    cout << "Przeboeg: " << przebieg <<endl;
}


