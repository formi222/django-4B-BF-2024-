#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main() {

    int a;
    int b;
    int c;


    cout << "Podaj trzy liczby(równe / w kolejności malejącej lub rosnącej ): ";
    cin >> a >> b >> c;

   
    if (a == b && b == c) {
        cout << "Liczby są równe.";
    } else if (a < b && b < c) {
        cout << "Liczby są podane rosnąco.";
    } else if (a > b && b > c) {
        cout << "Liczby są podane malejąco.";
    } else {
        cout << "Żaden z warunków nie jest spełniony ";
    }

    return 0;
}