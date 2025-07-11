#include <iostream>

using namespace std;

class Samochod
{
    public:

    // atrybuty
    string marka;
    string model;
    int rocznik;
    int przebieg;

    // metody
    void wczytaj()
    {
        cout<<"WCZYTYWANIE NOWEGO SAMOCHODU!"<<endl;
        cout<<"Podaj markę: ";
        cin>>marka;
        cout<<"Podaj model: ";
        cin>>model;
        cout<<"Podaj rocznik: ";
        cin>>rocznik;
        cout<<"Podaj przebieg: ";
        cin>>przebieg;
    }

    void wypisz()
    {
        cout<<"WYPISYWANIE SAMOCHODU"<<endl;
        cout<<"Marka: "<<marka<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Rocznik: "<<rocznik<<endl;
        cout<<"Przebieg: "<<przebieg<<endl;
    }
};

int main()
{
    Samochod s1;
    s1.wczytaj();
    s1.wypisz();
    Samochod s2;
    s2.wczytaj();
    s2.wypisz();
    
    return 0;
}