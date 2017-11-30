/*
 * losowanie.cpp
 * 
 */


#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int losuj(int &liczba)
{
	srand(time(NULL)); // pobieranie czasu od 1970 do teraz
	liczba = rand()% 100+1; // funkcja losująca liczbę
	return liczba;
}

int main(int argc, char **argv)
{
	int strzal, liczba, ile_prob = 0;
	cout << "Witaj! Pomyślałem sobie liczbę (1...100)" << endl;
	cout << losuj(liczba) << endl;
	while (strzal != liczba)
	{
		ile_prob++;
		cout << "Zgadnij jaka (To Twoja " << ile_prob << " próba)" << endl;
		cin >> strzal;
		if (strzal == liczba)
			cout << "Udało sie! (Wygrywasz w " << ile_prob << " próbie)" << endl;
		else if (strzal < liczba)
			cout << "To za mało!" << endl;
		else if (strzal > liczba)
			cout << "To za dużo!" << endl;
	}
	return 0;
}

