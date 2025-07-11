#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

vector<int> tablica;
bool czy=false;
clock_t start, stop;
double czas;

int f(int x, int y)
{
    if(x==1){
        return 1;
    }
    else{
        if ((y%x==0)&&(y!=x))
        {
            czy=true;
        }
        
        return y/f(x-1, y);
    }
}

int main()
{
    int a, b;
    cin>>a;
    b=a;

    start=clock();
    f(a, b);
    stop=clock();

    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Czas zapisu (rekurencja): "<<czas<<endl;

    czy=false;

    start = clock();
    for (int i = a-1; i > 1; i--)
    {
        if(a%i==0){
            czy=true;
        }  
    }
    stop = clock();

    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Czas zapisu (iteracja): "<<czas<<endl;
    
    if (czy==false)
    {
        cout<<"Jest to liczba pierwsza"<<endl;
    }
    else{
        cout<<"Nie jest to liczba pierwsza"<<endl;
    }
    
    return 0;
}