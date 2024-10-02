#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;


int main() {
    
    int rok;

    cout << "Podaj rok: ";
    cin >> rok;

    if ((rok % 4 == 0 / rok / 100 == 0) || (rok / 400 == 0)) {
        cout << "Rok " << rok << " jest rokiem przestępnym.";
    } else {
        cout << "Rok " << rok << " nie jest rokiem przestępnym.";
    }

    return 0;
}