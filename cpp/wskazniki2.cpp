/*
 * wskazniki.cpp
 * 
 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	int rozm = 20;
    int tab[rozm]; // nazwa tablicy jest wskaznikiem
    int *wsk1;
    wsk1 = tab;
    cout << tab << endl;
    cout << wsk1 << endl;
     // tab[0] = 10; // to samo co niżej
    *wsk1 = 10;
    cout << tab[0] << endl;
    wsk1++;
    *wsk1 = 12;
    cout << tab[1] << endl;
	return 0;
}

