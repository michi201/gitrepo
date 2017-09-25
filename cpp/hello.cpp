/*
 * hello.cpp
 */


#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
    // char imie; // deklaracja zmiennej znakowej
    char imie[10]; // deklaracja zmiennej tablicowej
    int wiek;
    wiek = 0; //inicjacja zmiennej
    
	cout << "Witaj w C++" << endl;
	cout << "Podaj imie: ";
    //cin >> imie;
    cin.getline(imie, 10);
    cout << "Czesc, " << imie << "!" << endl;
    cout << "Ile masz lat? ";
    cin >> wiek;
    cout << "Urodziles sie w roku " << 2017 - wiek << endl;
	return 0;
}

