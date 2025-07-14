#include <iostream>

using namespace std;


class Event
{
    int dzien, miesiac, rok;
    int godzina, minuta;
    string nazwa;

    public:
    Event(string="brak",int=1,int=1,int=1,int=12,int=0); //GDY UTWORZYNY OBIEKT TO DOMYŚLNIE PRZYJMUJEMY TE DANE
    void wczytaj();
    void pokaz();
    ~Event();
};
