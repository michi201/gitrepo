

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
	int a, b, c, obwod;
	a = b = c = obwod = 0;
	float p = 0;
	cout << "Podaj boki: " << endl;
	cin >> a >> b >> c;
	
	while(1)	
{	if (( a + b > c) && (a + c > b) && (b + c > a))
		{
			obwod = a + b + c;
			p = 0.5 * obwod;
			cout << "Pole: " << sqrt(p * (p-a) * (p-b) * (p-c)) << endl;
			break;
		}
	else
		{
			cout << "Podaj boki: " << endl;
			cin >> a >> b >> c;
		}
}
	return 0;
}
