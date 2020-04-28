#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


float horner(int stopien, float tb[], float x)
{
    float wynik = tb[0]; // inicjacja zmiennej, która przechowuje wynik
    // pętla o mliczająca wynik wielomianu na podstawie argumentu i współczynników
    for ( int i = 1; i < stopien+1; i++)
    {
        wynik = wynik * x + tb[i];
    }
    return wynik;
}


float odczytaj(char plik[])
{
    // instrukcja otwierająca plik
    fstream uchwyt;
    uchwyt.open(plik,ios::in);
    if(uchwyt.good()==false)
    {
        cout << "Plik nie istnieje" << endl;
        exit(0);
    }

    float x;  // inicjacja argumentu dla którego ma być wyliczony wielomian
    cout << "Podaj wartosc x: ";  // jeżeli x jest pierwiastkiem wielomianu wynik będzie równy 0
    uchwyt >> x; // wartość x zostaje przypisana z pliku wielomian.txt
    cout << x << endl;

    float tbwsp[!uchwyt.eof()]; // inicjacja tablicy ze współczynnikami wielomianu
    int stopien = 0; // inicjacja stopnia wielomianu
    int i = 0;
    while(!uchwyt.eof()) // pętla, która odczytuje współczynniki z pliku i przyporządkowywuje je do tablicy
    {
        stopien++;
        uchwyt >> tbwsp[i];
        cout << "Podaj wspolczynniki: " << tbwsp[i] << endl;
        i++;
    }
    stopien = stopien - 1;

    // wywołanie funkcji obliczającej wartość wielomianu i wypisanie wyniku
    float wynik = horner(stopien, tbwsp, x);
    uchwyt.close();
    return wynik;
}


int main(int argc, char **argv)
{
    cout << "Wynik: " << odczytaj("wielomian.txt") << endl; //wielomian.txt
    cout << "Wynik: " << odczytaj("wielomian1.txt") << endl; //wielomian1.txt
    cout << "Wynik: " << odczytaj("wielomian2.txt") << endl; //wielomian2.txt
    return 0;
}
