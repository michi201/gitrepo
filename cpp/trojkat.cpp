/*
 * hello.cpp
 */


#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
    int a, b, c;
    int obwod = 0;
    float p = 0;
    a = b = c = 0;
    
	cout << "Podaj boki:" << endl;
    cin >> a >> b >> c;
    if (( a + b > c) && (a + c > b) && (b + c > a))
    {
        obwod = a + b + c;
        cout << "Trójkąt istnieje" << endl;
        cout << "Obwod: " << obwod << endl;
        p = 0.5 * obwod;
        cout << " Współczynnik: " << p << endl;
        cout << "Pole: " << sqrt(p * (p-a) * (p-b) * (p-c)) << endl;
    }
    else {
        cout << "Trójkąt nie istnieje" << endl;    
	}
    return 0;
}

