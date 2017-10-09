

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int i, a, b;
    
    cout << "Podaj przedzial: " << endl;
    cin >> a;
    cin >> b;
    if ( a > 0 && b > 0 )
{
     for ( i = a; (i >= a && i <= b) ; i++)  
        {  
        cout << " " << i;
        }
}
    else
     {   cout << "Podałeś zły przedział" << endl; }
        
	return 0;
}
