/*
 * hello.cpp
 */


#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
    int promien = 0;
    
	cout << "Podaj promień" << endl;
    cin >> promien;
    cout << "Obwod: " << 2 * M_PI * promien << endl;
    cout << " Pole: " << M_PI * pow(promien, 2) << endl;
	return 0;
}

