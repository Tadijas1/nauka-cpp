//Dane i odczyt z pliku

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    /*cout<<"Podaj imie: ";   cin>>imie;
    cout<<"Podaj nazwisko: ";   cin>>nazwisko;
    cout<<"Podaj numer telefonu: ";   cin>>nr_tel;  PYTANIA!!!*/

    fstream plik;
    //plik.open("aa_plik_film7.1.txt", ios::out | ios::app);     ODCZYT!!!
    plik.open("aa_plik_film7.1.txt", ios::in);                 /*ZAPIS!!!*/

    if (plik.good()==false)     /*CZY PLIK ISTNIEJE!!!*/
    {
        cout<<"plik nie istnieje"<<endl;
        exit(0);
    }
    
    string linia;
    int nr_lini=1;
    while(getline(plik, linia))
    {
        switch (nr_lini)
        {
            case 1: imie=linia; break;
            case 2: nazwisko=linia; break;
            case 3: nr_tel = atoi(linia.c_str()); break;
        }

        nr_lini++;
    }

    /*plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr_tel<<endl;     ZAPIS DANYCH!!!*/

    plik.close();

    cout<<"imie: "<<imie<<endl;
    cout<<"nazwisko: "<<nazwisko<<endl;
    cout<<"nr tel: "<<nr_tel<<endl;
    return 0;
}