/*
** Test Array Program
** Sandro Gallo - 19/11/2025
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string v[10];

    for (int i=0; i<10; i++) v[i] = "Forza Juve";

    for (int i=0; i<10; i++) {
        cout << i << ") " << v[i] << endl;
    }

    return 0;
}