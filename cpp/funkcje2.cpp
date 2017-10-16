

#include <iostream>

using namespace std;

// w funkcjach zmienne nie wiążące się z innymi zmiennymi w innych funkcjach
int sumuj(int a, int b) 
{
    return a + b;
}

int odejmuj (int a, int b)
{
    return a - b;
}

int mnoz (int a, int b)
{
    return a * b;
}

int dziel (int a, int b)
{
    if ( b == 0)
        cout << "Nie dzieli sie przez 0!" << endl;
    else
        return a / b;   
    
}

int main(int argc, char **argv)
{
	int a, b;
    cout << "Podaj liczby: ";
    cin >> a >> b;
    int suma = sumuj(a, b);
    int roznica = odejmuj (a, b);
    int iloczyn = mnoz (a, b);
    int iloraz = dziel (a, b);
    
    
    cout << "Suma: " << suma << endl; // a i b z funkcji main
    cout << "Różnica: " << roznica << endl;
    cout << "Iloczyn: " << iloczyn << endl;
    cout << "Iloraz: " << iloraz << endl;
    
	return 0;
}

