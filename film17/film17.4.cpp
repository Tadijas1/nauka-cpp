#include <iostream>
#include <cmath>

using namespace std;

float liczba;

int main()
{
    //DANE  
    cout<<"Podaj kwotę: ";
    cin>>liczba;

    //ZAOKRĄGLENIE W DÓŁ 1-4 W GÓRĘ 5-9
    cout<<"Round: "<<round(liczba)<<endl;

    //ZAOKRĄDLANIE W DÓŁ
    cout<<"Floor: "<<floor(liczba)<<endl;

    //ZAOKRĄDLANIE W GÓR
    cout<<"Ceil: "<<ceil(liczba)<<endl;

    //ZAOKRĄGLANIE PRZEZ OBCINANIE LICZB PO ZA PRZECINKIEM
    cout<<"Trunc: "<<trunc(liczba)<<endl;

    return 0;
}