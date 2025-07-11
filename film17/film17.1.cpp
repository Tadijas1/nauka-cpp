#include <iostream>
#include <cmath>

using namespace std;

int x=4200, r, d, o1, o2;

int main()
{
    //DANE
    cout<<"Ile milionów zarobila gra minecraft?"<<endl;
    cout<<"Rick: ";
    cin>>r;
    cout<<"Daniel: ";
    cin>>d;
    
    //WARTOŚĆ BEZWZGLĘDNA
    o1=abs(x-r);    /*   fabs zamiast abs dla zmiennych typu float   */
    o2=abs(x-d);

    //WYNIK
    if(o1<o2) cout<<"Wygrał Rick!"<<endl; 
    else if(o2<o1) cout<<"Wygrał Deryl!"<<endl;
    else cout<<"Remis!"<<endl;

    return 0;
}