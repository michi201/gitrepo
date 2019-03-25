/*
 * lista.cpp
 */


#include <iostream>
using namespace std;


struct node {
    int liczba;
    node *nast;
};


char czy() {
    char odp;
    cout << "Następny element (t/n)? ";
    cin >> odp;
    return odp;
}


int getD() {
    int d;
    cout << "Podaj liczbe: " << endl;
    cin >> d;
    return d;
}


void drukuj(node *glowa) {
    node *tmp;
    tmp = glowa;
    while(tmp != NULL) {
        cout << tmp->liczba << " ";
        tmp = tmp->nast;
    }
    cout << endl;
}


void delLista(node *glowa) {
    node *tmp;
    while(glowa != NULL) {
        tmp = glowa;
        glowa = glowa->nast;
        delete tmp;
    }
}


int addToB() {
    node *glowa = NULL;
    node *nowy;
    
    while(czy() != 'n') {
        try {
            nowy = new node;
        } catch(bad_alloc) {
            cout << "Brak pamięci" <<endl;
            return 1;
        }
        nowy->nast = glowa;
        nowy->liczba = getD();
        glowa = nowy;
    }
    
    cout << "Zawartość listy: " << endl;
    drukuj(glowa);
    delLista(glowa);
    return 0;
}


int addToE() {
    node *glowa = NULL;
    node *ogon = NULL;
    node *nowy;
    
    while(czy() != 'n') {
        try {
            nowy = new node;
        } catch(bad_alloc) {
            cout << "Brak pamięci" <<endl;
            return 1;
        }
        nowy->nast = NULL;
        nowy->liczba = getD();
        if (glowa == NULL) {
            glowa = nowy;
            ogon = glowa;
        } else {
            ogon->nast = nowy;
            ogon = nowy;
        }
    }
    
    cout << "Zawartość listy: " << endl;
    drukuj(glowa);
    delLista(glowa);
    return 0;
}


int main(int argc, char **argv)
{
	// addToB();
    addToE();
	return 0;
}

