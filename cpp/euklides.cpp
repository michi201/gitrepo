/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

int nwd_v1(int a, int b)
{
	while (a != b)
	{	if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}


int main(int argc, char **argv)
{
	int a, b;
	cout << "Podaj liczbe naturalną: " << endl;
	cin >> a;
	cout << "Podaj liczbe naturalną: " << endl;
	cin >> b;
	// cout << "Największy wspólny dzielnik: " << nwd_v1(a, b) << endl;
	printf("NWD(%d, %d) = %d", a, b, nwd_v1(a, b));
	return 0;
}

