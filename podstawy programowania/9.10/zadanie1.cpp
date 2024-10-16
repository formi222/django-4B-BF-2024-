#include <iostream>
using namespace std;

int main() {
    int punkty;
    cout << "Podaj liczbę punktów uzyskanych na teście (0-100): ";
    cin >> punkty;

    if (punkty >= 0 && punkty <= 100) {
        }if (punkty < 40) {
            cout << "Ocena z testu: niedostateczna";
        } 
        else if (punkty < 55) {
            cout << "Ocena z testu: dopuszczająca";
        } 
        else if (punkty < 70) {
            cout << "Ocena z testu: dostateczna";
        } 
        else if (punkty < 85) {
            cout << "Ocena z testu: dobra";
        } 
        else if (punkty < 100) {
            cout << "Ocena z testu: bardzo dobra";
        } 
        else  {
            cout << "Ocena z testu: celująca";
        }
        else {
            cout << "Podana liczba nie jest z zakresu 0-100 ";
        }
            

    return 0;
}