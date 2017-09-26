/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b, c;
    a = b = c = 0;
    
    cout << "podaj bok a: " <<endl;
    cin >> a;
    cout << "podaj bok b: " <<endl;
    cin >> b;
    cout << "podaj bok c: " <<endl;
    cin >> c;
    



{   if ((c > b)&&(c > a))
        cout << "Najwieksze jest c" << endl;
    else
        if ((b > c)&&(b > a))
        cout << "Najwieksze jest b" << endl;
         else
            if ((a > b)&&(a > c))
                cout << "Najwieksze jest a" << endl;
            else
                 if ((a > c)&&(a = b))
                    cout << "Najwieksze jest a i b" << endl;
                else
                    if ((b > a)&&(b = c))
                        cout << "Najwieksza jest b i c" << endl;
                    else
                        if ((a > b)&&(a = c))
                            cout << "Najwieksze jest a i c" << endl;
                                else
                                    if ((a = b)&&(a = c)&&(b = c))
                                        cout << "Wszystkie sa rowne" << endl;
}
	return 0;
}

