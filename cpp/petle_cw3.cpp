
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
	int i, a;
    
    cout << "Podaj liczbe: " << endl;
    cin >> a;
	cout << "Kwadraty kolejnych liczb naturalnych do " << a << ":" << endl;
	
     for (i = 0 ; i <= a ; i++)
{  
    cout << pow(i, 2) << endl;
        
	
}
        
	return 0;
}
