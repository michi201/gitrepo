

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int x = 0;
	cout << "Podaj x: " << endl;
	cin >> x;
	
	while(x <= 0 || x > 15)	
{	
	cout << "X musi być w zakresie (0, 15> " << endl;
	cin >> x;
}
	cout << "Prawidłowo podana liczba to: " << x << endl;
	return 0;
}
