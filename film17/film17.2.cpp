#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

long long int x;
unsigned int y;

int main()
{
    //ILE BAJTÓW PRZECHOWUJE ZMIENNA X
    cout<<sizeof(x)<<endl;
    
    //POTĘGOWANIE
    x=pow(2,32)-1;
    y=x+1;
    cout<<setprecision(20);

    //WYNIK
    cout<<"Liczba którą maksymalnie zmieści zmienna int to: "<<x<<endl;
    cout<<"Y: "<<y<<endl;

    return 0;
}