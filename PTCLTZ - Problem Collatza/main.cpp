#include <iostream>

using namespace std;


int main()
{
    int ilosc_testow,x;
    cin>>ilosc_testow;
    while(ilosc_testow--)
    {
        cin >> x;
        int j=0;
        while(x!=1)
        {
            if(x % 2)
            {
                x = 3*x + 1;
            }
            else
            {
                x = x/2;
            }
            j++;
        }
        cout << j << endl;
    }
    return 0;
}
