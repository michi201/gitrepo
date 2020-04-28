

#include <iostream>

using namespace std;

// w funkcjach zmienne nie wiążące się z innymi zmiennymi w innych funkcjach
void sumuj(int a, int b) 
{
    cout << "Suma: " << a+b << endl;
}

void odejmuj (int a, int b)
{
    cout << "Różnica: " << a - b <<endl;
}

void mnoz (int a, int b)
{
    cout << "Iloczyn: " << a * b <<endl;
}

void dziel (int a, int b)
{
    if ( b == 0)
        cout << "Nie dzieli sie przez 0!" <<endl;
    else
        cout << "Iloraz: " << a / b <<endl;
    
}

int main(int argc, char **argv)
{
	int a, b;
    cout << "Podaj liczby: ";
    cin >> a >> b;
    
    sumuj(a, b); // a i b z funkcji main
    odejmuj (a, b);
    mnoz (a, b);
    dziel (a, b);
    
	return 0;
}

