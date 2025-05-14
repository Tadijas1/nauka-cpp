#include <iostream>

using namespace std;

int test, goscie;
long c_pudelko;
long ile_ciastek;


int main()
{
    cin>>test;

    for (int i = 1; i <= test; i++)   
    {
        ile_ciastek=0;
        cin>>goscie>>c_pudelko;
        int czas[goscie];

        for (int i = 0; i < goscie; i++){
            cin>>czas[i];
        }

        for (int i = 0; i < goscie; i++)
        {
            ile_ciastek+=86400/czas[i];
        }
        
        if(ile_ciastek%c_pudelko==0){
            ile_ciastek=ile_ciastek/c_pudelko;
        }
        else{
            ile_ciastek=ile_ciastek/c_pudelko;
            ile_ciastek++;
        }

        cout<<ile_ciastek<<endl;
    }
    return 0;
}