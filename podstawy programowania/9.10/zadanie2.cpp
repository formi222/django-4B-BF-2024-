#include <iostream>
#include <cmath>

using namespace std;

    int main(){
        int a;
        int b;
        int c;
        int obwód;
        int pole;

        cout << "Podaj bok a : ";
        cin >> a;
        cout << "Podaj bok b : ";
        cin >> b;
        cout << "Podaj bok c : ";
        cin >> c; 

        if (a+b>c && a+c>b && c+b>a){
            obwód = (a+b+c/2 );
            pole = sqrt(obwód * (obwód - a) * (obwód - b) * (obwód - c) );

            cout << "Pole wynosi " << pole; 
        }
            else{
                cout << "Z podanych boków nie moża utworzyć trójkąta";
            }
        return 0;
    }