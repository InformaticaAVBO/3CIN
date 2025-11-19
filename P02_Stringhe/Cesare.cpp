/*
** Hello World Program
** Sandro Gallo - 10/10/2025
*/

#include <iostream>
#include <cstring>
using namespace std;

string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string chiave_sostituzione = "QWERTYUIOPASDFGHJKLZXCVBNM";

string cifra_per_sostituzione( string s, string chiave ) {
    string r = "";
    for (int i=0; i<s.length(); i++) {
        char c = s[i];
        if ( (c>='A' && c<='Z') ) {
            c = chiave[c - 'A'];
        }
        else if ( (c>='a' && c<='z') ) {
            c = chiave[c - 'a'] + ('a' - 'A');
        }
        r.append(1, c);
    }
    return r;
}

string decifra_per_sostituzione( string s, string chiave ) {
    string r = "";
    for (int i=0; i<s.length(); i++) {
        char c = s[i];
        if ( (c>='A' && c<='Z') ) {
            size_t index = chiave.find(c);
            if (index != string::npos) {
                c = 'A' + index;
            }
        }
        else if ( (c>='a' && c<='z') ) {
            size_t index = chiave.find(c - ('a' - 'A'));
            if (index != string::npos) {
                c = 'a' + index;
            }
        }
        r.append(1, c);
    }
    return r;
}

string cifra_a_rotazione( string s, int k ) {
    string r = "";
    for (int i=0; i<s.length(); i++) {
        char c = s[i];
        if ( (c>='A' && c<='Z') ) {
            c = 'A' + ( (c - 'A' + k) % 26 );
        }
        else if ( (c>='a' && c<='z') ) {
            c = 'a' + ( (c - 'a' + k) % 26 );
        }
        r.append(1, c);
    }
    return r;
}

string decifra_a_rotazione( string s, int k ) {
    return cifra_a_rotazione( s, 26 - (k % 26) );
}

int main()
{
    string str;
    cout << "Inserisci una stringa: ";
    getline(cin, str);
    cout << "Inserisci un intero: ";
    int k;
    cin >> k;

    string res = cifra_a_rotazione(str, k);
    cout << res << endl;
    cout << decifra_a_rotazione(res, k) << endl;

    string res2 = cifra_per_sostituzione(str, chiave_sostituzione);
    cout << res2 << endl;
    cout << decifra_per_sostituzione(res2, chiave_sostituzione) << endl;
    
    return 0;
}