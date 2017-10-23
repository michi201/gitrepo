

#include <iostream>

using namespace std;

void pobierzliczby (int tab[], int ile)
{
    int i;
    for (i = 0; i < ile; i++)
    {
        cout << "Podaj liczbe: " <<endl;
        cin >> tab[i];
    }
    
}
void sumuj (int liczby[], int ilosc)
{
    int i;
    int suma = 0;
    for (i = 0; i < ilosc ; i++)
    { 
        suma+= liczby[i];
    }
    cout << "Suma liczb: " << suma << endl;
}

void najmniejsza (int tab[], int ilosc)
{
    ; // funkcja znajduje i drukuje najmniejsza liczbe z tabeli
}

int main(int argc, char **argv)
{
    int rozmiar = 0;
    cout << "Podaj ilość liczb: " << endl;
    cin >> rozmiar;
    
	int liczby [rozmiar];
    
    pobierzliczby(liczby, rozmiar);
    
    sumuj(liczby, rozmiar);
    
	return 0;
}

