#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

// funkcja wypełniająca tablice elementami pseudolosowymi
void wypelnij_los(int t[], int n, int max)
{
	srand(time(NULL));
	for ( int i = 0; i < n; i++) 
    {   
        t[i] = rand()% max+1; // funkcja losująca liczbę
    }
}

// funkcja wypełniająca tablicę elementami odczytanymi z pliku
void wypelnij_plik(int tb[], char plik[])
{
	// instrukcja otwierająca plik
    fstream uchwyt;
    uchwyt.open(plik,ios::in);
    if(uchwyt.good()==false)
    {
        cout << "Plik nie istnieje" << endl;
        exit(0);
    }

	tb[!uchwyt.eof()]; // inicjacja tablicy z elementami do posortowania
	int i = 0;
	
	while(!uchwyt.eof()) // pętla, która odczytuje dane z pliku i przyporządkowywuje je do tablicy
    {
        uchwyt >> tb[i];
        i++;
    }
    uchwyt.close();
}


void zapisz(int tb[], int n, char plik[])
{
	
	// instrukcja otwierająca plik
    fstream uchwyt;
    uchwyt.open(plik,ios::out);
    if(uchwyt.good()==false)
    {
        cout << "Plik nie istnieje" << endl;
        exit(0);
    }

	for ( int i = 0; i < n; i++) 
    {   
        uchwyt << tb[i] << " ";
    }
    uchwyt.close();
}


// funkcja wypisująca tablice na ekranie
void drukuj(int t[], int n)
{
	for ( int i = 0; i < n; i++) 
    {   
        cout << t[i] << " ";
    }
    cout << endl;
}


void sort_bab(int tab[], int n)
{
    cout << " ------------- Sortowanie bąbelkowe ---------------" << endl;
	for(int i = 0; i < n; i++)
	{
        for (int j = 0; j < n - 1 - i; j++)
        {
			if(tab[j] > tab[j + 1]) // badanie wszystkich par elementów oddalonych o 1
                swap(tab[j], tab[j + 1]); //zamiana elementów tabeli (sortowanie)
        }
    }
}


void sort_grzeb( int tab[], int n )
{
    cout << " ------------- Sortowanie grzebieniowe ---------------" << endl;	
    int gap = n; // deklaracja "rozpiętości" czyli wielkości tablicy
   
    while( gap > 1 )
    {
        gap = gap * 10 / 13; // odrzucanie części ułamkowej, poprzez dzielenie przez 1.3
        if( gap == 0 )
             gap = 1;
       
        for( int i = 0; i + gap < n; i++ )
        {
            if( tab[ i + gap ] < tab[ i ] ) // badanie wszystkich par elementów oddalonych o rozpiętość
                swap( tab[ i ], tab[ i + gap ] ); //zamiana elementów tabeli (sortowanie)
        }
    }
}


int main(int argc, char **argv)
{
    int ile = 10;
    int tab[ile];
    
    cout << "Losowanie: " << endl;   
    wypelnij_los(tab, ile, 20);
    zapisz(tab, ile, "wylosowane_bab.txt");
	drukuj(tab, ile);
    sort_bab(tab, ile);
    drukuj(tab, ile);
    cout << endl;
    
    wypelnij_los(tab, ile, 50);
    zapisz(tab, ile, "wylosowane_grzeb.txt");
	drukuj(tab, ile);
    sort_grzeb(tab, ile);
    drukuj(tab, ile);
    cout << endl;
    
    cout << "Plik 1: " << endl;
    wypelnij_plik(tab, "sortowanie1.txt");
	drukuj(tab, ile);
    sort_bab(tab, ile);
    drukuj(tab, ile);
    zapisz(tab, ile, "wynik_sort1_bab.txt");
    cout << endl;
    
    
    wypelnij_plik(tab, "sortowanie1.txt");
	drukuj(tab, ile);
    sort_grzeb(tab, ile);
    drukuj(tab, ile);
    zapisz(tab, ile, "wynik_sort1_grzeb.txt");
    cout << endl;
    
    cout << "Plik 2: " << endl;
    wypelnij_plik(tab, "sortowanie2.txt");
	drukuj(tab, ile);
    sort_bab(tab, ile);
    drukuj(tab, ile);
    zapisz(tab, ile, "wynik_sort2_bab.txt");
    cout << endl;
    
    wypelnij_plik(tab, "sortowanie2.txt");
	drukuj(tab, ile);
    sort_grzeb(tab, ile);
    zapisz(tab, ile, "wynik_sort2_grzeb.txt");
    drukuj(tab, ile);
    
    
    
    return 0;
}

