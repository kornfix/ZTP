#include <iostream>

using namespace std;

int main()
{
    int ilosc_testow;

    cin>>ilosc_testow;
    while(ilosc_testow--)
    {
        int a,b;
        cin>> a;
        cin >> b;
        cout << NWD(a,b)<<endl;

    }
    return 0;
}
