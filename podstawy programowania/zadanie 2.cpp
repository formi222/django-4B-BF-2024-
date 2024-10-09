#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int liczba()
{
    int liczba;
    cout << "Podaj liczbę";
    cin >> liczba;

    int wartość_bezwgledna;
    if (liczba < 0 ){
        wartość_bezwgledna = -liczba;
    }
    else {
        wartość_bezwgledna = liczba;
    }

    cout << "Wartość bezwzględna z liczby " << liczba << " to " << wartość_bezwgledna;

    return 0;
}