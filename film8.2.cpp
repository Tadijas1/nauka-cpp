#include <iostream>

using namespace std;


int main()
{
    string wyraz;
    cout<<"Podaj wyraz do odwrocenia: ";
    cin>>wyraz;

    int dlugosc = wyraz.length();
    
    for (int i = dlugosc-1; i >= 0; i--)
    {
        cout<<wyraz[i];
    }

    string napis;
    cout<<"Podaj napis: ";

    getline(cin, napis); //ZAPISYWANIE KILKU WYRAZOW ODDZIELONYCH SPACJAMI

    cout<<napis;

    return 0;
}