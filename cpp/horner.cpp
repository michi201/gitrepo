/*
 * horner.cpp
 * 
 */


#include <iostream>

using namespace std;

float horner_it(int stopien, float tb[], float x)
{
    float wynik = tb[0];
    for ( int i = 1; i < stopien+1; i++)
    {
        wynik = wynik * x + tb[i];
    }
    return wynik;
}

float horner_rek(int stopien, float tb[], float x)
{	
	if (stopien == 0)
		return tb[0];
	return horner_rek(stopien - 1, tb, x) * x + tb[stopien];
}


int main(int argc, char **argv)
{
	int stopien = 3;
    float x;
    float tbwsp[4];
	cout << "Podaj wartość x: " << endl;
    cin >> x;
    for(int i = 0; i < 4; i++)
    {
        cout << "Podaj współczynnik: " << endl;
        cin >> tbwsp[i];
    }
    cout << "Wynik: " << horner_rek(stopien, tbwsp, x) << endl;
    
    return 0;
}

