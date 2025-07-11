#include <iostream>

using namespace std;


int main()
{
    /*char *napis="Ala ma kota";
    cout<<napis<<endl;

    napis="kot";
    cout<<napis<<endl; TAK SIĘ ROBLO W JĘZYKU C!!!*/



    /*string napis="Ale ma kota";
    cout<<napis[0]<<endl;
    cout<<napis[1]<<endl; TAK SIĘ ROBI W JĘZYKU C++       STRINGI SIĘ SKLADAJĄ Z CIĄGÓW CHARÓW NP. STRING "KOT" TO CHARY 'K', 'O', 'T'*/

    string imie;

    cout<<"Podaj imie: ";
    cin>>imie;

    int dlugosc=imie.length();

    if (imie[dlugosc-1]=='a'||'A')
    {
        cout<<"Jest to imie zenskie"<<endl;
    }

    else cout<<"Jest to imie meskie"<<endl;

    
    return 0;
}