#include <iostream>
#include <valarray>

using namespace std;

int main()
{
    int ilosc_testow, n;
    cin>>ilosc_testow;
    while(ilosc_testow--)
    {
        cin >> n;
        int *tab = new int[n];
        for(int i=0;i<n;i++)
        {
            cin >> tab[i];
        }
        for (int i = 1; i < n; i++)
        {
             cout << tab[i] << " ";
        }
        cout << tab[0] << endl;
    }
}
