#include <iostream>

using namespace std;



int main()
{
    int ilosc_testow, *tab, n;
    cin>>ilosc_testow;

    while(ilosc_testow--)
    {
        cin>> n;
        tab = new int [n];
        for(int i=0; i<n; i++)
        {
            cin>>tab[i];
        }
        for(int i=n-1; i>=0; i--)
        {
            cout<<tab[i] << " ";
        }

    }
    return 0;
}
