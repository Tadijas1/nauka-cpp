#include <iostream>
#include <cmath>

using namespace std;

class Ksztalt
{
    public:
    virtual void oblicz_pole()=0;
    // czysta funkcja wirtualna
};

class Kolo :public Ksztalt
{
    float r;

    public:
    Kolo(float x=1)
    {
        r=x;
    }
    virtual void oblicz_pole()
    {
        cout<<"Pole Koła: "<<M_PI*r*r<<endl;
    }
};

class Kwadrat :public Ksztalt
{
    float a;

    public:
    Kwadrat(float x=2)
    {
        a=x;
    }
    virtual void oblicz_pole()
    {
        cout<<"Pole kwadratu: "<<a*a<<endl;
    }
};

void obliczenia(Ksztalt *x)
{
    x -> oblicz_pole();
}

int main()
{
    Kolo k;
    Kwadrat kw;

    Ksztalt *wsk;

    wsk = &k;
    wsk -> oblicz_pole();

    wsk = &kw;
    wsk -> oblicz_pole();
    
    // LUB (TO JEST TO SAMO)

    obliczenia(&k);
    obliczenia(&kw);

    return 0;
}