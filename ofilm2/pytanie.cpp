#include <iostream>
#include "pytanie.h"
#include <fstream> //możliwość odczytywania z pliku tekstowego
#include <cstdlib> //możliwość używania komendy exit(0)
#include <algorithm>

using namespace std;

string trim(const string& s) {
    size_t start = s.find_first_not_of(" \n\r\t");
    size_t end = s.find_last_not_of(" \n\r\t");
    return (start == string::npos) ? "" : s.substr(start, end - start + 1);
}

void Pytanie::wczytaj()
{
    fstream plik;
    plik.open("quiz.txt", ios::in);

    if(plik.good()==false)
    {
        cout<<"Nie udało się otworzyć pliku!"<<endl;
        exit(0);
    }
    
    int nr_linii = (nr_pytania-1)*6+1;
    int aktualny_nr=1;
    string linia;

    while (getline(plik, linia))
    {
        if(aktualny_nr==nr_linii) tresc=linia;
        if(aktualny_nr==nr_linii+1) a=linia;
        if(aktualny_nr==nr_linii+2) b=linia;
        if(aktualny_nr==nr_linii+3) c=linia;
        if(aktualny_nr==nr_linii+4) d=linia;
        if(aktualny_nr==nr_linii+5) poprawna = trim(linia);
        aktualny_nr++;
    }

    plik.close();    
}

void Pytanie::zadaj()
{
    cout<<tresc<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Która z odpowiedzi jest poprawna: ";
    cin>>odpowiedz;
}

void Pytanie::sprawdz()
{
    transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);
    cout<<odpowiedz<<endl;
    if(odpowiedz==poprawna){
        punkt=1;
    }
    else punkt=0;
}
