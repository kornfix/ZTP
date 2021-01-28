#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int Newton(double n, double k)
{
    double wynik = 1;
    for(int i=1;i<=k;i++)
    {
        wynik = (wynik *(n-i+1)) /i;
    }
    return (int) round(wynik);
}

int main()
{
    int ile;
    cin >>ile;
    for(int i=0; i<ile; i++)
    {
        int n, k;
        cin >>n>>k;
        cout << Newton(n,k)<<endl;
    }
    return 0;
}
