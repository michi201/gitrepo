/*
 * wektor.cpp
 */


#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


struct punkt {
    int x;
    int y;
};


struct wektor {
    punkt pp;
    punkt pk;
};


void pobieranie(wektor) {
    wektor w;
    cout << "Podaj współrzędną x punktu początkowego: " << endl;
    cin >> w.pp.x;
	cout << "Podj współrzędną y punktu początkowego: " << endl;
    cin >> w.pp.y;
    cout << "Podaj współrzędną x punktu koncowego: " << endl;
    cin >> w.pk.x;
	cout << "Podj współrzędną y punktu końcowego: " << endl;
    cin >> w.pk.y;
};


void obliczanie(wektor w) {
    punkt ps;
    ps.x = float((w.pk.x - w.pp.x) / 2);
    ps.y = float((w.pk.y - w.pp.y) / 2);
    cout << "Współrzędne środka: " << ps.x << "," << ps.y << endl;
};


int main(int argc, char **argv)
{
    wektor w;
    pobieranie(w);
    obliczanie(w);
	return 0;
}

