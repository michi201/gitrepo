/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int bok;
    bok = 0; //inicjacja zmiennej
    
	cout << "Podaj bok kwadratu" << endl;
    cin >> bok;
    cout << "Obwod: " << bok * 4 << endl;
    cout << " Pole: " << bok * bok << endl;
	return 0;
}

