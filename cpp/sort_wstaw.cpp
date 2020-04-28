/*
 * sort_wybor.cpp
 * 
 */


#include <iostream>

using namespace std;

void wypelnij(int t[], int n, int max)
{
	srand(time(NULL)); // pobieranie czasu od 1970 do teraz
	for ( int i = 0; i < n; i++) 
    {   
        t[i] = rand()% max+1; // funkcja losująca liczbę
    }
}

void drukuj(int t[], int n)
{
	for ( int i = 0; i < n; i++) 
    {   
        cout << t[i] << " ";
    }
    cout << endl;
}


void sort_wstaw(int tab[], int n)
{
    // insert sort
    cout << " ------------- Sortowanie przez wstawianie ---------------" << endl;
	int i, k, el;
    for (i = 1; i < n; i++)
    {    el = tab[i];
        k = i - 1;
        while (k >= 0 && tab[k] > el)  // wyzsukiwanie pozycji
        {    tab[k + 1] = tab[k];  // przesuwanie elementów
            k = k - 1;
        }
        tab[k + 1] = el;
	}
}


int main(int argc, char **argv)
{
    int ile = 10;
    int tab[ile];
    wypelnij(tab, ile, 50);
	drukuj(tab, ile);
    sort_wstaw(tab, ile);
    drukuj(tab, ile);
    return 0;
}

