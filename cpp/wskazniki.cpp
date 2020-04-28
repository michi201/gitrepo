/*
 * wskazniki.cpp
 * 
 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	int x = 13;
    double y = 10;
    int *wsk1; // zmienna wskaznikowa
    double *wsk2;
    wsk2 = &y;
    wsk1 = &x; // inicjacja wskaznika - adres komórki pamięci
    cout << x << endl;
    cout << wsk1 << endl;
    cout << &x << endl;
    // *wsk1 odwołanie do wartosci przypisanej do wskaźnika
    *wsk1 += 1;
    cout << *wsk1 << endl;
    
    wsk1 += 1;
    cout << wsk1 << endl;
    
    cout << sizeof(x) << endl;
    cout << sizeof(y) << endl;
    cout << wsk2 << endl;
    wsk2 += 1;
    cout << wsk2 << endl;
    
	return 0;
}

