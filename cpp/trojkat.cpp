/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b, c;
    a = b = c = 0;
    
	cout << "Podaj boki:" << endl;
    cin >> a >> b >> c;
    cout << "Obwod: " << a + b + c  << endl;
	return 0;
}

