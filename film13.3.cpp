#include <iostream>

using namespace std;

long int silnia(int n)
{
    if(n==0) return 1;
    else return n*silnia(n-1);
}

int main()
{
    cout<<silnia(4)<<endl;
    
    return 0;
}