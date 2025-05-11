#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    system("cls");
    cout<<"Witaj! Pomyslalem siobie liczbe od 1 do 100"<<endl;
    srand(time(NULL));
    liczba = rand()%100+1;
    Sleep(2000);

    while (strzal!=liczba)
    {
        system("cls");
        ile_prob++;
        cout<<"Zgadnij jaka to liczba (to twoja "<<ile_prob<<" proba): ";
        cin>>strzal;

        if (strzal==liczba)
        {
            cout<<"Gratulecje! Wygrywasz"<<endl;
            Sleep(1000);
        }

        if (strzal<liczba)
        {
            cout<<"To za malo"<<endl;
            Sleep(1000);
        }
        
        if (strzal>liczba)
        {
            cout<<"To za duzo"<<endl;
            Sleep(1000);
        }
    }
    system("cls");
    cout<<"Odgadles w "<<ile_prob<<" probach"<<endl;

    getchar();getchar(); //dla pewności 2 razy

    return 0;
}
