

#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	int liczby [10];
    int i;
    int suma = 0;
    int ilosc = 0;
    
    for (i = 0; i < 10; i++)
    {
        cout << "Podaj liczbe: " <<endl;
        cin >> liczby[i];
    }
    
   for (i = 0; i < 10; i++)
    { 
        suma+= liczby[i];
            if ( i % 2 == 0)
                ilosc++;
    }

    cout << "Suma liczb: " << suma << endl;

    
    cout << ilosc;
    
	return 0;
}

