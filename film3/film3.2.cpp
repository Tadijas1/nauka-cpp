#include <iostream>

using namespace std;

string imie;
int liczba;

int main()
{
    cout<<"Jak masz na imie: ";
    cin>>imie;
    cout<<"Ile razy ma sie ono pojawic na ekranie: ";
    cin>>liczba;

    for (int i=1; i<=liczba; i++)
    {
        cout<<i<<". "<<imie<<endl;
    }

    return 0;
}