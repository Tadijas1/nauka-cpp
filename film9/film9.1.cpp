#include <iostream>

using namespace std;

float metry; //ZMIENNA GLOBALNA

float ile_cali(float m) //NAGLÓWEK FUNKCJI
{
    float cale = m*39.37; //ZMIENNA LOKALNA
    return cale;

    // return m*39.37;  TAK TEŻ MOŻE BYĆ
}

float ile_jardow(float x); //TYLKO NAGLÓWEK A RESZTA FUNKCJI POD MAIN!!!

void ile_mil(float m)
{
    cout<<"Na mile: "<<m*0.0006213;
}

int main()
{
    cout<<"Podaj ile metrow: ";
    cin>>metry;
    cout<<"Na cale: "<<ile_cali(metry)<<endl;
    cout<<"Na jardy: "<<ile_jardow(metry)<<endl;
    ile_mil(metry);

    return 0;
}

float ile_jardow(float x)
{
   return x*1.0936;
}