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
        cout<<"Punkt: "<<nzwa<<"("<<x<<","<<y<<")"<<endl;
    }
};

class Kolo :public Punkt // klasa Kolo dziedziczy publicznie z klasy Punkt
{
    string nazwa;
    
    protected:
    float r;

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

class Kula :public Kolo
{
    string nazwa;

    public:
    Kula(string nkul="Kula", string nk="Kółko", string np="S", float a=0, float b=0, float pr=1)
    :Kolo(nk, np, a, b, pr)
    {
        nazwa=nkul;
    }
    void wyswietl()
    {
        Kolo::wyswietl();
        cout<<"Obiętość kuli: "<<(4/3)*M_PI*r*r*r<<endl;
    }
};

int main()
{
    //Punkt p1;
    //p1.wyswietl();
    Kolo k1;
    k1.wyswietl();
    Kula kul1;
    kul1.wyswietl();
    
    return 0;
}