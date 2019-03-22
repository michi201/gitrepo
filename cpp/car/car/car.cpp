/*
 * car.cpp
 * 
 */
#include <iostream>
#include <cstdlib>
#include "car.h"

Car::Car() {
    rocznik=przebieg=0;
}

Car::Car(string mr, string ml, int r, char p) {
    if (r <= 1970) r = 1990;
    marka = mr;
    model = ml;
    rocznik = r;
    przebieg = p;
}

void Car::dodaj() {
    cout << "Dodaj samchód:" << endl;
    cout << "Marka: "; cin >> marka;
    cout << "Model: "; cin >> model;
    cout << "Rocznik: "; cin >> rocznik;
    cout << "Przebieg: "; cin >> przebieg;
}

void Car::dane() {
    cout << endl;
    cout << "Twój samchód:" << endl;
    cout << "Marka: " << marka << endl;
    cout << "Model: " << model << endl;
    cout << "Rocznik: " << rocznik << endl;
    cout << "Przebieg: " << przebieg << endl;
}

