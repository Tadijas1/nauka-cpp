//WHILE, FOR

#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;


int main()
{
    for (int i=1; i<=10; i++)//LICZBY OD 1 DO 10
    {
        cout<<i<<endl;
    }

    for (int i=15; i>=0; i--)
    {
        Sleep(1000);
        system("cls");
        cout<<i<<endl;
    }
    cout<<"JEBUT";
    return 0;
}