#include <iostream>
#include <cmath>

using namespace std;

class Punkt
{
    float x,y;
    string nzwa;

    public:
    Punkt(string n="S", float xx=0, float yy=0)
    {
        nzwa=n;
        x=xx;
        y=yy;
    }
    void wyswietl()
    {
        cout<<nzwa<<"("<<x<<","<<y<<")"<<endl;
    }
};

class Kolo :public Punkt // klasa Kolo dziedziczy publicznie z klasy Punkt
{
    float r;
    string nazwa;

    public:
    void wyswietl()
    {
        cout<<"Nazwa koła: "<<nazwa<<endl;
        cout<<"Środek koła: ";
        Punkt::wyswietl();
        cout<<"Promień koła: "<<r<<endl;
        cout<<"Pole kołą: "<<M_PI*r*r<<endl;
    }
    Kolo(string nk="Kółko", string np="S", float a=0, float b=0, float pr=1)
    :Punkt(np, a, b)
    {
        nazwa=nk;
        r=pr;
    }
};

int main()
{
    Kolo k1;
    k1.wyswietl();
    
    return 0;
}