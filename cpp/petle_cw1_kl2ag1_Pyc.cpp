

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
	int a = 0;
	cout << "Podaj liczbe: " << endl;
	cin >> a;
    
while (a < 0)
{
	cout << "Musisz podać liczbe dodatnią: " << endl;
	cin >> a;
	
}

	cout << "Kwadrat liczby: " << pow(a , 2) << endl;
	cout << "Pierwiastek liczby: " << sqrt(a) << endl;

	return 0;
}
