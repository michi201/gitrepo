/*
 * hello.cpp
 */


#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
    int a, b;
    a = b = 0;
    char znak; // zanak to +, -, *, /
    
	cout << "Podaj pierwszą liczbę: " << endl;
    cin >> a;
    cout << "Podaj znak: " << endl;
    cin >> znak;
    cout << "Podaj drugą liczbę: " << endl;
	cin >> b;
    if ( znak == '+')
        cout << "Wynik: " << a + b << endl;
    if ( znak == '-')
        cout << "Wynik: " << a - b << endl;
    return 0;
}

