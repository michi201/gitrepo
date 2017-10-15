/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b, c;
    a = b = c = 0;
    
    for(;;)
    
{    

    cout << "podaj bok a: " <<endl;
    cin >> a;
    cout << "podaj bok b: " <<endl;
    cin >> b;
    cout << "podaj bok c: " <<endl;
    cin >> c;
  

    if (!cin) // jeżeli wartość nie jest cyfrą
        {
         system( "clear" );
         cin.clear(); //czyści flagi błędów np. wyczyścić a="e" żeby mogło byc a=0                                
         cin.sync(); //czyści bufor
         cout << "Podales bledna wartosc, sprobuj ponownie" << endl;
        }
    else
    if ((c > b) && (c > a))
    {
        cout << "Najwieksze jest c" << endl;
        exit(0);
    }
    else
    if ((b > c) && (b > a))
    {
        cout << "Najwieksze jest b" << endl;
        exit(0);
    }
    else
    if ((a > b) && (a > c))
    {
        cout << "Najwieksze jest a" << endl;
        exit(0);
    }
    else
    if ((a > c) && (a = b))
    {
        cout << "Najwieksze jest a i b" << endl;
        exit(0);
    }
    else
    if ((b > a) && (b = c))
    {
        cout << "Najwieksza jest b i c" << endl;
        exit(0);
    }
    else
    if ((a > b) && (a = c))
    {
        cout << "Najwieksze jest a i c" << endl;
        exit(0);
    }
    else
    if ((a = b) && (a = c) && (b = c))
    {
        cout << "Wszystkie sa rowne" << endl;
        exit(0);
    }
    else
        ;

}
	return 0;
}

