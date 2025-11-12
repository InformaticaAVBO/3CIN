/*
** Hello World Program
** Sandro Gallo - 10/10/2025
*/

#include <iostream>
#include <cmath>
using namespace std;

double reale2percepita( double T, double v ) {
    if (v<5) return T;
    double percecipita = ( 33 + (0.45+0.29*sqrt(v) - 0.02*v) * (T-33) );
    return percecipita;  
}

bool isPalindrome( string s ) {
    int lunghezza = s.length();
    for (int i=0; i<lunghezza/2; i++) {
        if (s[i] != s[lunghezza-(i+1)]) return false;
    }
    return true;
}



int main()
{
    cout << isPalindrome("Hello World") << endl;
    cout << isPalindrome("ciaoaic") << endl;
    cout << reale2percepita(30,10) << endl;

    return 0;
}