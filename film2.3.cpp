#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout<<"Ile masz lat: ";
    cin>>wiek;

    if(wiek<18)
    {
        cout<<"Nie jestes jestes pelnoletni i nie mozesz zostac prezydentem"<<endl;
    }

    else if ((wiek>=18)&&(wiek<35))
    {
        cout<<"Jestes pelnoletni ale nie mozesz zostac prezydentem"<<endl;
    }
    
    else
    {
        cout<<"Jestes pelnoletni i mozesz zostac prezydentem";
    }
    return 0;
}