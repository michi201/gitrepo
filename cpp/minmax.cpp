/*
 * minmax.cpp
 * 
 */


#include <iostream>
#include <time.h>

using namespace std;

int losuj(int ileliczb, int maxliczb)
{
    int i, liczba;
    // int ile = 0; // ilośc unikalnych liczb
    srand(time(NULL)); // pobieranie czasu od 1970 do teraz
    for (i = 0; i < ileliczb; i++)
    {
		liczba = rand()% 40 + 10; // funkcja losująca liczbę (przedział od 10 do 50)
		cout << liczba << endl;
    }
    return liczba;
}

int minimum(int tab[])
{
	int min = tab[0];
	for( int i = 1; i < 10; i++)
	{
		if(tab[i] < min)
			min = tab[i];
	}
	return min;
}

int maximum(int tab[])
{
	int max = tab[0];
	for( int i = 1; i < 10; i++)
	{
		if(tab[i] > max)
			max = tab[i];
	}
	return max;
}

int main(int argc, char **argv)
{
	int tab[losuj(10, 50)];
	
	cout << "Min: "<< minimum(tab) << endl;
	cout << "Max: " << maximum(tab) << endl;
	
	return 0;
}
