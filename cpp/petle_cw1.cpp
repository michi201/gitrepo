

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int liczba, suma;
    suma = 0;
    
     while (1)   
  {  
    cout << "Podaj liczbę:" << endl;
    cin >> liczba;
    suma += liczba;
    
    if ( suma > 75)
        break;
}
    cout << "Suma liczb: " << suma << endl; 
          
    
	return 0;
}

