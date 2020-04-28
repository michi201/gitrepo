

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int i, suma;
    suma = 0;
    for ( i = 1; i < 11; i++)
        cout << "Uzyte liczby: " << i << endl;
    for ( i = 1; i < 11; i++)
        {  suma += i; }
        
        cout << "Wynik: " << suma << endl;

	return 0;
}

