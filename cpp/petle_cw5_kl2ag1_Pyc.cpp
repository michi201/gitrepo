

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int liczba, suma;
	suma = 0;
	cout << "Podaj liczbe: " << endl;
	cin >> liczba;

	while (1)
{	
		while (liczba > 0)
		{
			suma += liczba % 10;
			liczba = liczba / 10;
		
		}

		cout << "Suma cyfr: " << suma << endl;
		
		if ( suma > 0 && suma < 10)
			break;
		else
			{
				liczba += suma;
				suma = 0;
			}

}	
	
	return 0;
}
