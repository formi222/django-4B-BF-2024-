#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main(){
       
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba/2 == 0) {
        cout << "Liczba " << liczba << " jest parzysta.";
    } else {
        cout << "Liczba " << liczba << " jest nieparzysta.";
    }
        
    return 0;
}
