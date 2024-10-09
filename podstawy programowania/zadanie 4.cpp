#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main(){
    int a;
    int b;

    cout << "Podaj liczbe a : ";
    cin >> a;
    cout << "Podaj liczbe b : ";
    cin >> b;

    if(b == 0 ){
        cout << "Nie można dzielić przez 0";
    }
    else{
        int reszta = a / b;
        cout << "Reszta z dzielenia " << a << " przez " << b << " to: " << reszta ;
    }
    return 0;
    }


