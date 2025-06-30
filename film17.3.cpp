#include <iostream>
#include <cmath>

using namespace std;

float x_1, y_1, x_2, y_2, d;

int main()
{
    //DANE
    cout<<"Podaj współrzędne pierwszej postaci(x, y): ";
    cin>>x_1>>y_1;
    cout<<"Podaj współrzędne drugiej postaci(x, y): "; 
    cin>>x_2>>y_2;

    //PIERWIASTEK
    d=sqrt(pow(x_1-x_2, 2)+pow(y_1-y_2, 2));
    cout<<"Wynik: "<<d<<endl;

    //PIERWIASTEK 3 STOPNIA
    cout<<cbrt(27)<<endl;
    //LUB
    cout<<pow(27, 1.0/3.0)<<endl;

    return 0;
}