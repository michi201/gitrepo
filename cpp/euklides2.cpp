/*
 * euklides2.cpp
 */


#include <iostream>

using namespace std;

int nwd_v2(int a, int b)
{
    while ( a > 0)
    {
        a = a % b;
        b = b - a;
    }
    return b;
}

int main(int argc, char **argv)
{
	int a, b;
	cout << "Podaj liczbe naturalną: " << endl;
	cin >> a;
	cout << "Podaj liczbe naturalną: " << endl;
	cin >> b;
	// cout << "Największy wspólny dzielnik: " << nwd_v2(a, b) << endl;
	printf("NWD(%d, %d) = %d", a, b, nwd_v2(a, b));	
	return 0;
}

