#include <iostream>

using namespace std;

class Pytanie
{
    public:

    // argumenty
    int nr_pytania;
    string tresc;
    string a,b,c,d;
    string poprawna;
    string odpowiedz;
    int punkt;

    // metody
    void wczytaj(); //wczytuje pytania z pliku
    void zadaj(); //zadaje pytanie i czyta odpowiedź
    void sprawdz(); //sprawdza czy odpowiedź jest poprawna
};