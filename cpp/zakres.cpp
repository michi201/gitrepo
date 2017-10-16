

#include <iostream>

using namespace std;

int liczba, krok; //zmienna globalna

void zwieksz() {
    liczba += krok;
}

int main(int argc, char **argv)
{
    // int liczba, krok; // zmienna lokalna
    cout << "Podaj liczbe i krok: ";
    cin >> liczba >> krok;
    
    cout << "liczba i krok: " << liczba << " " << krok << endl;
    zwieksz();
    cout << "liczba i krok: " << liczba << " " << krok << endl;
   
    
	return 0;
}

