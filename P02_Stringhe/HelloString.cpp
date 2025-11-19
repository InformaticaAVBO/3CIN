/*
** Hello String Program
** Sandro Gallo - 19/11/2025
+*/

#include <iostream>
using namespace std;

bool isPalindrome( string s ) {
    int lunghezza = s.length();
    for (int i=0; i<lunghezza/2; i++) {
        if (s[i] != s[lunghezza-(i+1)]) return false;
    }
    return true;
}



int main()
{
    string s;
    cout << "Inserisci una stringa: ";
    getline(cin, s);
    
    cout << "La stringa " << s << " è lunga " << s.length() << " caratteri." << endl;
    cout << "La stringa al contrario è: " + string(s.rbegin(), s.rend()) << endl;
    cout << ( isPalindrome(s) ? "È" : "Non è" ) << " un palindromo." << endl;
    return 0;
}