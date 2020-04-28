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
    
{    if (a > c)
        {   if (a > b)
                cout << "Najwieksze jest a";
            else 
               cout << "Najwieksze jest b";
        }
    else
        {
            if (c > b)
                cout << "Najwieksze jest c";
            else
                cout << "Najwieksze jest b";
        }
}
	return 0;
}

