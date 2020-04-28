/*
 * tablice.cpp
 */


#include <iostream>
#include <time.h>

using namespace std;


void wprowadz(float tb[], int ile) {
    cout << "Wprowadz oceny: " << endl;
    for(int i=0; i<ile; i++) {
        cin >> tb[i];
        }
}


void drukuj(float tb[], int ile) {
    cout << "Podane oceny: " << endl;
    for(int i=0; i<ile; i++) {
        cout << tb[i] << " ";
    }
    cout << endl;
}


int tab1w() {
    float *tb = NULL;
    int ile;
    cout << "Ile podasz ocen?" << endl;
    cin >> ile;
    
    try {
        tb = new float[ile];
    } catch(bad_alloc) {
        cout << "Za mało pamięci!" << endl;
        return 1;
    };
    wprowadz(tb, ile);
    drukuj(tb, ile);
    return 1;
}


void wprowadz2(int *tb[], int w, int k) {
    srand(time(NULL));
    for(int i=0; i<w; i++) {
        for(int j=0; j<k; j++) {
            tb[i][j] = rand() % 101; // losowanie liczb [0-100]
            }
        }
}


void drukuj2(int *tb[], int w, int k) {
    for(int i=0; i<w; i++) {
        for(int j=0; j<k; j++) {
            cout << tb[i][j] << endl;
            }
    }
    
    
}


int tab2w() {
    int w, k; // w- wiersze, k- kolumny
    cout << "Liczba wierszy i kolumn: " << endl;
    cin >> w >> k;
    
    int **tb; // wskaźnik do wskaźnika
    
    try {
        tb = new int *[w];
    } catch(bad_alloc) {
        cout << "Za mało pamięci!" << endl;
        return 1;
    }
    
    for(int i=0; i<w; i++) {
        try {
            tb[i] = new int[k];
        } catch(bad_alloc) {
            cout << "Za mało pamięci!" << endl;
            return 1;
        }    
    }
    wprowadz2(tb, w, k);
    drukuj2(tb, w, k);
    return 1;
}



int main(int argc, char **argv)
{
	// tab1w();
    tab2w();
	return 0;
}
