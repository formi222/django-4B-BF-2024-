#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int liczenie()
{
    int a;
    cin>>a;
    if(a>0){
    cout<<"Liczba jest większa od 0";
    }
    else if(a=0){
    cout<<"Liczba równa 0";    
    }
    else {
    cout<<"Liczba mniejsza od 0";
    }

    return 0;

}