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
    string s = "Sandro";
    cout << s.length() << endl;
    string s2 = s;
    for (int i=0; i<s.length(); i++) {
        s2[i] = s[s.length()-(i+1)];
    }
    cout << s2 << endl;

    return 0;
}