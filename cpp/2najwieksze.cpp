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
    



{   if ((a > b)&&(a = c))
        cout << "Najwieksze jest a i c" << endl;
    if ((a > c)&&(a = b))
        cout << "Najwieksze jest a i b" << endl;
    if ((b > a)&&(b = c))
        cout << "Najwieksza jest b i c" << endl;
    
}
	return 0;
}

