#include <iostream>

using namespace std;

int bakterie=1; int godziny=0;

int main()
{
    while(bakterie<=1000000000)
    {
        bakterie=bakterie*2;
        godziny++;
        cout<<"Minelo godzin:"<<godziny;
        cout<<" Liczba bakterii:"<<bakterie<<endl;
    }
    //TO JEST TO SAMO
    do
    {
        bakterie=bakterie*2;
        godziny++;
        cout<<"Minelo godzin:"<<godziny;
        cout<<" Liczba bakterii:"<<bakterie<<endl;
    } while(bakterie<=1000000000);
    
    return 0;
}