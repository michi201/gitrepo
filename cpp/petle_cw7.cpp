

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a, proby;
    proby = 6;
    
    cout << "Podaj miesiąc:  " << endl;
 do
 {
     cin >> a;
    if ( a > 0 && a < 13 )
    {
        cout << " Miesiąc poprawny " << endl;
        break;
    }
    else
    { 
         cout << "Podałeś niprawidłowy miesiąc" << endl; 
    }

        proby--;
} while ( proby > 3);

    switch (a)
    {
        case 1 : 
            cout << "styczeń" << endl;
        break;
        case 2 : 
            cout << "luty" << endl;
        break;
        case 3 : 
            cout << "marzec" << endl;
        break;
        case 4 : 
           cout << "kwiecien" << endl;
        break;
        case 5 : 
            cout << "maj" << endl;
        break;
        case 6  : 
            cout << "czerwiec" << endl;
        break;
        case 7 : 
            cout << "lipiec" << endl; 
        break;
            
    }
    
    
      
	return 0;
}
