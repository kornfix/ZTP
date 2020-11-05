#include <iostream>
#include <math.h>
using namespace std;

int ostatniaLiczba(int a, int b){
    long long x=1, y=a;
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % 10;
        }
        y = (y*y) %10;
        b /= 2;
    }
    return x % 10;
}


int main()
{
    int ilosc_testow;

    cin>>ilosc_testow;
    while(ilosc_testow--)
    {
        int a,b;
        cin>> a;
        cin >> b;
        cout << ostatniaLiczba(a,b)<<endl;
    }
    return 0;
}
