

#include <iostream>

using namespace std;

void ile5 (int tab[], int ilosc)
{
    int i;
    int licznik = 0;
    for(i = 0; i < ilosc; i++)
    {
        if (tab[i] % 5 == 0)
        licznik++;
    }
    cout <<"Ilośc liczb podzielnych przez 5 to: " << licznik << endl;
}

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
    int min = tab[0];
    for( int i = 1; i < ilosc; i++)
    {
        if (min > tab[i])
                min = tab [i];
    }
    cout << "Najmnijesza liczba: " << min <<endl;
}

int main(int argc, char **argv)
{
    int rozmiar = 0;
    cout << "Podaj ilość liczb: " << endl;
    cin >> rozmiar;
    
	int liczby [rozmiar];
    
    pobierzliczby(liczby, rozmiar);
    
    sumuj(liczby, rozmiar);
    
    najmniejsza (liczby, rozmiar);
    
    ile5 (liczby, rozmiar);
    
    
	return 0;
}

