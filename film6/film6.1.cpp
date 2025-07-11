#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float liczba1, liczba2;
char wybor;

int main()
{
    while (true)
    {
        cout<<"Podas 1 liczbe: ";
        cin>>liczba1;
        cout<<"Podaj 2 liczbe: ";
        cin>>liczba2;

        cout<<"MENU GLOWNE"<<endl;
        cout<<"1. Dodawanie"<<endl;
        cout<<"2. Odejmowanie"<<endl;
        cout<<"3. Mnozenie"<<endl;
        cout<<"4. Dzielenie"<<endl;
        cout<<"5. Koniec programu"<<endl;

        wybor=getch();
        cout<<endl;

        switch (wybor)
        {
        case '1':
            cout<<"Suma to: "<<liczba1+liczba2<<endl;
        break;

        case '2':
            cout<<"Roznica to: "<<liczba1-liczba2<<endl;
        break;

        case '3':
            cout<<"Iloczyn to: "<<liczba1*liczba2<<endl;
        break;

        case '4':
            if (liczba2==0) cout<<"Nie mozna dzielic przez zero"<<endl;
            else cout<<"Iloraz to: "<<liczba1/liczba2<<endl;
        break;

        case '5': exit(0);

        default: cout<<"Nie ma takiej opcji"<<endl;
        }
        getchar();getchar();
        system("cls");
    }
    return 0;
}