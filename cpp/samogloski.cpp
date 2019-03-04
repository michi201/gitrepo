#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;


int liczZnaki(char nazwa[]) {
    char kopia[15];
    cout << kopia << endl;
    
    // otwieranie pliku
    ifstream wejscie(nazwa);
    if (!wejscie) { cout << "Brak pliku!"; return 1; }
    
    ofstream wyjscie(kopia);
    if (!wyjscie) { cout << "Błąd pliku!"; return 1; }
    
    char znak;
    int ile = 0;

    while(!wejscie.eof()) {
        wejscie.get(znak); // odczytanie poj. znaku
        if (wejscie && (znak == 'a') || znak == 'e' || znak == 'u' || znak == 'i' || znak == 'o' || znak == 'y') {
            ile++;
            wyjscie.put(znak); // zapisanie znaku do pliku
        }
    }
    wejscie.close(); wyjscie.close();
    cout << "Znaków: " << ile << endl;
    return ile;
}


int main(int argc, char **argv)
{
    char nazwa[20];
    cout << "Podaj nazwę pliku: ";
    cin.getline(nazwa, 20);
    cout << nazwa << endl;
    liczZnaki(nazwa);
    return 0;
}
