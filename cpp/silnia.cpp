/*
 * silnia.cpp
 * 
 */


#include <iostream>

using namespace std;

int silnia_it(int n)
{
    int wynik = 1;
    for (int i = 2; i <= n; i++)
    {
        wynik = wynik * i;
    }
    return wynik;
}

int silnia_rek(int n)
{
	if (n < 2)
		return 1;
	return n * silnia_rek(n - 1) ;
}

int main(int argc, char **argv)
{
    int n;
    cout << "Podaj wykładnik silni: " << endl;
    cin >> n;
    cout << "Silnia: " << silnia_rek(n) <<endl;
	return 0;
}

