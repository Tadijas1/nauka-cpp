//SORTOWANIE BOMBELKOWE

#include <iostream>
#include <time.h>

using namespace std;
clock_t start, stop;
double czas;
int ile;

void sortawanie_b(int *tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j>=1; j--)
        {
            if (tab[j]<tab[j-1])
            {
                int bufor; bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
            
        }
        
    }
    
}

void quicksort(int *tablica, int lewy, int prawy)
{
    int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
    do{
        while (tablica[i]<v) i++;
        while (tablica[j]>v) j--;
        if (i<=j){
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++; j--;
        }
    }while (i<=j);
    if (j>lewy) quicksort(tablica,lewy, j);
    if (i<prawy) quicksort(tablica, i, prawy);
}

int main()
{
    cout<<"Porównanie czesów sortowania!"<<endl;

    cout<<"Ile losowych liczb w tablicy: ";
    cin>>ile;
    
    //DYNAMICZNA ALOKACJA TABLICY

    int *tablica;
    tablica=new int [ile];

    int *tablica2;
    tablica2=new int [ile];

    //INICJOWANIE GENERATOA
    srand(time(NULL));

    //WCZYTYWANIE LOSOWYCH LICZB DO TABLICY
    for (int i = 0; i < ile; i++)
    {
        tablica[i] = rand()%100000+1;
    }

    //PRZEPISANIE TABLICY DO TABLICY2

    for (int i = 0; i < ile; i++)
    {
        tablica2[i]=tablica[i];
    }

    start=clock();
    sortawanie_b(tablica,ile);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    
    cout<<"Czas sortowania bombelkowego: "<<czas<<endl;
    /*
    cout<<"SORTOWANIE QICKSORT"<<endl;

    cout<<"Przed posortowaniem: ";

    for (int i = 0; i < ile; i++)
    {
        cout<<tablica2[i]<<" ";
    }
    cout<<endl;
    */
    start=clock();
    quicksort(tablica2,0,ile-1);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    /*
    cout<<"Po posortowaniu: "<<endl;
    for (int i = 0; i < ile; i++)
    {
        cout<<tablica2[i]<<" ";
    }
    cout<<endl;
    */
    cout<<"Czas sortowania qicksort: "<<czas<<endl;

    delete [] tablica;
    delete [] tablica2;

    return 0;
}   