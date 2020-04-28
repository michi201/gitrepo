/*
 * pliki.cpp
 */


#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;


void zmienNazwe1(char t1[], char t2[]) {
    // kopiowanie znaków z tablicy do tablicy
    // METHOD 1
    int i=0;
    while(t1[i] != '.') {
        t2[i] = t1[i];
        i++;
    }
    t2[i] = '.';
    t2[++i] = 'b';
    t2[++i] = 'a';
    t2[++i] = 'k';
    t2[++i] = '\0';
}


void zmienNazwe2(char t1[], char t2[]) {
    // kopiowanie znaków z tablicy do tablicy
    // METHOD 2
    char *wskaznik;
    strcpy(t2, t1);
    wskaznik = strstr(t2, ".txt");
    strncpy(wskaznik, ".bak", 4);
}


void liczZnaki(char tb[]) {
    char kopia[15];
    zmienNazwe2(tb, kopia);
    cout << kopia;
    // otwieranie pliku
    ifstream wejscie(tb);
    if (!wejscie) { cout << "Błąd pliku!" << endl; return 1; }
    
    ofstream wyjscie(kopia);
    if (!wyjscie) { cout << "Błąd pliku!" << endl; return 1; }
        
    char znak;
    int ile, ileal, ilenum, ilealnum;
    ile = ileal = ilenum = ilealnum = 0;
    
    while(!wejscie.eof()) {
        wejscie.get(znak); // odczytywanie pojedynczego znaku
        if (wejscie) ile ++;
        if (wejscie && isalpha(znak)) ileal ++; // liczymy litery
        if (wejscie && isdigit(znak)) ilenum ++; // liczymy cyfry
        if (wejscie && isalnum(znak)) {
             ilealnum ++; // liczymy litery i cyfry
             wyjscie.put(znak); // zapisanie znaku do pliku
        }
        if((int)znak == 10)
            wyjscie.put('\n');
    }
    wejscie.close(); wyjscie.close();
    cout << "Znaków: " << ile << endl;
    cout << "Liter: " << ileal << endl;
    cout << "Cyfr: " << ilenum << endl;
    return ile;
}


int zapiszCyfry(char tb[]) {
    char kopia[15] = {"cyfry.txt"};
    // otwieranie pliku
    ifstream wejscie(tb);
    if (!wejscie) { cout << "Brak pliku!"; return 1; }
    ofstream wyjscie(kopia);
    if (!wyjscie) { cout << "Błąd pliku!"; return 1; }
    
    char znak;
    while(!wejscie.eof()) {
        wejscie.get(znak); // odczytanie poj. znaku
        if ( (wejscie && isdigit(znak)) || znak == '.') {
            wyjscie.put(znak);
        }
        if ((int)znak == 10)
            wyjscie.put('\n');
    }
    wejscie.close(); wyjscie.close();
    return 0;
}


void sumuj(char tb[]){
    ifstream wejscie(tb);
    float liczba;
    float suma=0;
    while(!wejscie.eof()) {
        wejscie >> liczba;
        suma += liczba;
    };
    cout << "Suma: " << suma << endl;
}



int main(int argc, char **argv)
{
    char tb[15];
	cout << "Podaj nazwę pliku: " << endl;
    cin.getline(tb, 15);
    cout << tb << endl;
    // liczZnaki(tb);
    // zapiszCyfry(tb);
    sumuj(tb);
	return 0;
}

