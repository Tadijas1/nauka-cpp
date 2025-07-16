#include <iostream>
#include "event.h"

using namespace std;

Event::Event(string n, int r, int m, int d, int g, int min)
{
    nazwa=n; rok=r; miesiac=m; dzien=d; godzina=g; minuta=min;
}

/*void Event::wczytaj()
{
    cout<<"Wczytywanie danych!"<<endl;
    cout<<"Podaj nazwę wydarzenia: ";
    cin>>nazwa;
    cout<<"Podaj rok wydarzenia: ";
    cin>>rok;
    cout<<"Podaj numer miesiąc wydarzenia: ";
    cin>>miesiac;
    cout<<"Podaj dzień wydarzenia: ";
    cin>>dzien;
    cout<<"Podaj godzinę wydarzenia: ";
    cin>>godzina;
    cout<<"Podaj minutę wydarzenia: ";
    cin>>minuta;
}                       JEST NIE POTRZEBNE (to na górze)*/

void Event::pokaz()
{
    cout<<"Wydarzenie "<<nazwa<<" odbędzie się "<<dzien<<"."<<miesiac<<"."<<rok<<" o godzinie "<<godzina<<":"<<minuta<<endl;
}

Event::~Event()
{
    cout<<"kill"<<endl;
}