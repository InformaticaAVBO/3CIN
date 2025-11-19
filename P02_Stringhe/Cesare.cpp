/*
** Hello World Program
** Sandro Gallo - 10/10/2025
*/

#include <iostream>
#include <cstring>
using namespace std;

int find( char c, string s ) {
    for (int i=0; i<s.length(); i++) {
        if (s[i]==c) return i;
    }
    return -1;
}

string cifra_sost( string s ) {
    string x = "abcdefghijklmnopqrstuvwxyz";
    string y = "cbafedihglkjonmrqputsxwvzy";
    for (int i=0; i<s.length(); i++) {
        int pos = find(s[i], x);
        if (pos==-1) ........
    }
}

string codifica( string s ) {
    string r = "";
    for (int i=0; i<s.length(); i++) {
        char c = s[i];
        if ( (c>='A' && c<'Z') || (c>='a' && c<'z') ) c++;
        else if (c=='Z') c='A';
        else if (c=='z') c='a';
        r += c;
    }
    return r;
}

string decodifica( string s ) {
    string r = "";
    for (int i=0; i<s.length(); i++) {
        char c = s[i];
        if ( (c>'A' && c<='Z') || (c>'a' && c<='z') ) c--;
        else if (c=='A') c='Z';
        else if (c=='a') c='z';
        r += c;
    }
    return r;
}

int main()
{
    string str = codifica("CiaoZz4,");
    cout << str << endl;
    cout << decodifica(str) << endl;

    return 0;
}