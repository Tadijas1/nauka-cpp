#include <iostream>
#include "przyjaciele.h"

using namespace std;

Punkt::Punkt(string n, float xx, float yy)
{
    nazwa=n;
    x=xx;
    y=yy;
}

void Punkt::wczytaj()
{
    cout<<"Podaj x: "; cin>>x;
    cout<<"Podaj y: "; cin>>y;
    cout<<"Podaj nazwę: "; cin>>nazwa;
}

Prostokat::Prostokat(string n, float xx, float yy, float w, float s)
{
    nazwa=n;
    x=xx;
    y=yy;
    wysokosc=w;
    szerokosc=s;
}

void Prostokat::wczytaj()
{
    cout<<"Podaj x (lewy dolny narożnik): "; cin>>x;
    cout<<"Podaj y (lewy dolny narożnik): "; cin>>y;
    cout<<"Podaj wysokość: "; cin>>wysokosc;
    cout<<"Podaj szerokość: "; cin>>szerokosc;
    cout<<"Podaj nazwę:¨ "; cin>>nazwa;
}