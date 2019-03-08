/*
 * wektork.cpp
 */


#include <iostream>
using namespace std;


class Wektor {
    protected:
        static int nrw;
    private:
        double x;
        double y;
    public:
        Wektor();
        Wektor(int, int);
        void pobierz();
        void wypisz();
        friend Wektor dodaj(Wektor, Wektor);
};


Wektor::Wektor(int a, int b) {
    x = a;
    y = b;
    Wektor::nrw++;
}


Wektor::Wektor() {
    x = y = 0;
    Wektor::nrw++;
}


void Wektor::pobierz() {
    cout << "Podaj współrzędne " << Wektor::nrw << " wektora: " << endl;
    cin >> x >> y;
}

void Wektor::wypisz() {
    cout << "Wektor nr " << Wektor::nrw << ": " << endl;
    cout << "[" << x <<", " << y << "]" << endl;
}


Wektor dodaj(Wektor w1, Wektor w2) {
    Wektor w3 = Wektor();
    w3.x = w1.x + w2.x;
    w3.y = w1.y + w2.y;
    return w3;
}


Wektor pomnoz(Wektor w1, Wektor w2) {
    Wektor w4 = Wektor();
    w4.x = w1.x * w2.x;
    w4.y = w1.y * w2.y;
    return w4;
}

int Wektor::nrw = 0;


int main(int argc, char **argv)
{
    Wektor w1 = Wektor(3, 4);
    w1.wypisz();
    Wektor w2 = Wektor(5, 6);
    w2.wypisz();

    Wektor w3 = Wektor();
    w3 = dodaj(w1, w2);
    w3.wypisz();

    Wektor w4 = Wektor();
    w4 = pomnoz(w1, w2);
    w4.wypisz();
    
	return 0;
}

