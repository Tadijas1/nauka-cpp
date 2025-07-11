#include <iostream>
#include <cmath>

using namespace std;

float liczba[5];
float srednia;
float roznica[5];

int main()
{
    cout<<"Poadj 5 liczb oddzielonych spacjami: ";
    cin>>liczba[0]>>liczba[1]>>liczba[2]>>liczba[3]>>liczba[4];
    
    srednia=(liczba[0]+liczba[1]+liczba[2]+liczba[3]+liczba[4])/5;
    cout<<"Srednia tych liczb to "<<srednia<<endl;

    for (int i = 0; i < 5; i++)
    {
        roznica[i]=srednia-liczba[i];
        roznica[i]=abs(roznica[i]);
    }

    float m;
    float liczby_w[2];
    bool odpowiedzi = false;
    m=roznica[0];
    liczby_w[0]=liczba[0];

    for (int i = 1; i < 5; i++)
    {
        if(m>roznica[i]){
            m=roznica[i];
            liczby_w[0]=liczba[i];
        }
        else if((m==roznica[i])&&(liczby_w[0]!=liczba[i])){
            liczby_w[1]=liczba[i];
            odpowiedzi=true;
        }
    }

    if(odpowiedzi==false) cout<<"Liczba najblizsza to "<<liczby_w[0]<<endl;
    else cout<<"Liczba najblizsza to "<<liczby_w[0]<<" i "<<liczba[1]<<endl;
    
    return 0;
}