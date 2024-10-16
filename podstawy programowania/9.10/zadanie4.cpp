#include <iostream>
#include <cmath>

using namespace std;

    int main() {

        int a;
        int b;
        int znak; 

        cout << "Podaj liczbe a : ";
        cin >> a;
        cout << "Podaj liczbe b : ";
        cin >> b;

        cout << "Podaj znak operacji : (+, -, *, /, %)";
        cin >> znak ;

        switch(znak){
             case '+':
                cout << "Wynik: " << a + b;
                break;
            case '-':
                cout << "Wynik: " << a - b;
                break;
            case '*':
                cout << "Wynik: " << a * b;
                break;
            case '/':
                if (b == 0) {
                    cout << "Błąd: Dzielenie przez zero!";
                } else {
                    cout << "Wynik: " << a / b;
                }
                break;
        }
        case '%':
                // Sprawdzenie, czy liczby są całkowite
                if (static_cast<int>(a) == a && static_cast<int>(b) == b && b != 0) {
                    cout << "Wynik: " << static_cast<int>(a) % static_cast<int>(b);
                } else {
                    cout << "Błąd: Operacja % wymaga liczb całkowitych oraz niezerowej drugiej liczby!";
                }
                break;
            default:
                cout << "Błąd: Nieznany znak działania!";
                break;
        
     else {
        cout << "Błąd: Niepoprawny znak działania!";
    }

    return 0;


    }

