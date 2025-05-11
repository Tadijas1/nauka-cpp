#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    string jeden="Ala ma";
    string dwa=" kota i psa";

    string trzy = jeden+dwa;

    cout<<trzy<<endl;


    
    string napis="Ala ma kota";

    transform(napis.begin(), napis.end(), napis.begin(), ::toupper);// WSZYSTKO Z DUZEJ LITERY
    cout<<napis<<endl;

    transform(napis.begin(), napis.end(), napis.begin(), ::tolower);// WSZYSTKO Z MALEJ LITERY
    cout<<napis<<endl;



    string szukaj="kot";

    size_t pozycja=napis.find(szukaj);

    if (pozycja!=string::npos) cout<<"Znaleziono na pozycji: "<<pozycja<<endl;// OD JAKIEJ POZYCJI W NAPISIE ZACZYNA SIĘ WYRAZ NP. "KOT"
    else cout<<"Nie znaleziono"<<endl;



    napis.erase(3,3);// USUWANIE ZNAKOW Z NAPISU! PIERWSZA LICZBA W NAWIASIE, OD JAKIEGO MIEJSCA ZACZĄĆ, A DRUGA ILE MIEJSC PO NIEJ USUNAC
    cout<<napis<<endl;
    napis="Ala ma kota";

    napis.insert(11, " Filemona");// DODAWANIE DO NAPISU! PIERWSZA LICZBA W NAWIASIE, OD JAKIEGO MIEJSCA ZACZĄĆ, A DRUGA CO DODAC
    cout<<napis<<endl;



    napis.replace(4, 2, "nie ma");// ZASTAMPIANIE SLOW W NAPISIE JAKIMIS INNYMI SLOWAMI. PIERWSZA LICZBA W NAWIASIE, OD JAKIEGO MIEJSCA ZACZĄĆ, A DRUGA ILE ZNAKOW ZASTAPIC, A TRZECIA CZYM ZASTAPIC
    cout<<napis<<endl;
    napis="Ala ma kota";



    string nowynapis=napis.substr(4, 7);// WYJMIJ 7 ZNAKOW OD SZUFLADKI 4, A NASTEPNIE ZAPISZ JE W ZMIENNEJ NAOWYZAPIS
    cout<<nowynapis<<endl;

    return 0;
}