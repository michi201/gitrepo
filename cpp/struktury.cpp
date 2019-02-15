/*
 * struktury.cpp
 */


#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

#define ILE 2

struct osoba {
    char imie[10];
    char nazwisko[20];
    int wiek;
};


void getOsoby(osoba tb[]) {
    for(int i=0; i < ILE; i++) {
        osoba o;
        cout << "Wprowadz dane ucznia: " << endl;
        cout << setw(11) << left << "Imię: "; cin >> o.imie;
        cout << setw(10) << left << "Nazwisko: "; cin >> o.nazwisko;
        cout << setw(10) << left << "Wiek: "; cin >> o.wiek;
        cout << endl;
        tb[i] = o;
    };
    
};


void drukuj(osoba tb[]) {
    for(int i=0; i < ILE; i++) {
        cout << "Dane ucznia: " << endl;
        cout << setw(11) << left << "Imię: " << tb[i].imie << endl;
        cout << setw(10) << left << "Nazwisko: " << tb[i].nazwisko << endl;
        cout << setw(10) << left << "Wiek: " << tb[i].wiek << endl;
        cout << endl;
    };
    
};


void zapiszOsoby(osoba tb[]) {
    ofstream plik;
    plik.open("osoby.txt");
    for(int i=0; i < ILE; i++) {
        plik << tb[i].imie << endl;
        plik << tb[i].nazwisko << endl;
        plik << tb[i].wiek << endl;
        plik << endl;
    };
    plik.close();
};


int main(int argc, char **argv)
{
    osoba tb[ILE];
    getOsoby(tb);
    drukuj(tb);
    zapiszOsoby(tb);
    
    
	return 0;
}

