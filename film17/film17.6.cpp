#include <iostream>
#include <cmath>

using namespace std;

float kat;

int main()
{
    //DANE
    cout<<"Podaj wartość kąta: ";
    cin>>kat;
    
    //SIN
    cout<<sin(kat*M_PI/180.0)<<endl;

    //COS
    cout<<cos(kat*M_PI/180.0)<<endl;

    //TAN
    cout<<tan(kat*M_PI/180.0)<<endl;

    //KTAN
    cout<<1/tan(kat*M_PI/180.0)<<endl;

    return 0;
}