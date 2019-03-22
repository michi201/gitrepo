/*
 * kolejka.cpp
 */


#include <iostream>
using namespace std;

int rozmiar = 3;
int head, tail = 0; // głowa, ogon (poczatek, koniec)
int ile = 0;
int dane[3];


void push() {
    if (ile >= rozmiar)
        cout << "Kolejka pełna" << endl;
    else {
        cout << "Podaj wartość: ";
        cin >> dane[tail];
        tail++;
        ile++;
    }
}


void pop() {
    if (ile == 0) {
        cout << "Kolejka pusta" << endl;
        head = tail = 0;
    } else {
        cout << "POP: " << dane[head] << endl;
        tail = head;
        head++;
        ile--;
    }
}


int main(int argc, char **argv)
{
	push();
	push();
	push();
	push();
    
    pop();
    pop();
    pop();
    pop();
	return 0;
}

