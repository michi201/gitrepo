/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b, c;
    a = b = c = 0;
    
	cout << "Podaj boki:" << endl;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
            cout << "Najwieksze jest a";
        else
            cout << "Najwieksze jest c";
    } 
    else
    {
        ; // a nie jest większe od b
    }
	return 0;
}

