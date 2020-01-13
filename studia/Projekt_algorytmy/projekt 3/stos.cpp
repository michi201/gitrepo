#include <iostream>
#include <cstdlib>
#include <fstream>
#include <time.h>

using namespace std;

//int stos[];  // pusta lista, zasieg globalny
int rozmiar;  // wskaznik wierzcholka


void wyswietl(int stos[])
{
	cout<<endl;
    cout<<"----------------"<<endl;
    cout<<"ZAWARTOSC STOSU:"<<endl;
    cout<<"----------------"<<endl;
 
    for (int i=rozmiar; i>=1; i--)
    {
        cout << stos[i] << endl;
    }
 
    if (rozmiar==0) 
		cout << "pusty" << endl;
 
    cout << "----------------"<<endl<<endl;
	
}



void zlicz(int stos[])
{
	cout << rozmiar << endl;
	
}


 
 void push(int stos[], int wielkosc)
{
	if (rozmiar < wielkosc)
	{
		cout << "podaj liczbe ktora chcesz polozyc na stosie: " << endl;
		rozmiar += 1;  // inkrementacja
		cin >> stos[rozmiar];
	}
	else
		cout << "Stos pelny" << endl;
}

void pop(int stos[])
{
	if (rozmiar >= 1)
	{
		cout << "Liczba usunieta ze stosu: " << stos[rozmiar] << endl;
		rozmiar -= 1; //dekrementacja
	}
	else
		cout << "Stos pusty" << endl;
}



int main(int argc, char **argv)
{
	int wielkosc;
	cout << "Podaj wielkosc stosu: " << endl;
	cin >> wielkosc;
	int stos[wielkosc];
    
    int wybor;
    do
    {	
		cout << endl;
		cout << "Wybierz co chcesz zrobić:" << endl;
		cout << "----------------------" << endl;
		cout << "1. Dodaj element do stosu" << endl;
		cout << "2. Usuń element ze stosu" << endl;
		cout << "3. Wyswietl stos" << endl;
		cout << "4. Zlicz elementy" << endl;
		cout << "5. Zakoncz program" << endl;
		cout << "----------------------" << endl;
		cout << "Wybor" << endl;
		cin >> wybor;
		
        switch (wybor)
        {
        case 1:
            push(stos, wielkosc);
            break;
 
        case 2:
            pop(stos);
            break;
 
        case 3:
            wyswietl(stos);
            break;
            
        case 4:
			zlicz(stos);
			break;
        }
		
		
	} while(wybor != 5);

	return 0;
}

