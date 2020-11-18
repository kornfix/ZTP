#include <iostream>
#include <cmath>

using namespace std;
double ile, suma=0,ob, czas[100000000];
long double c;

int main()
{
    cin >>ile;
    for(int i=0; i<ile; i++)
    {
        cin >>ob>>c;

        for(int k=0;k<ob;k++)
        {

            cin >>czas[k];
            suma+=floor(86400/czas[k]);
        }
    cout << ceil(suma/c)<<endl;
    suma=0;
    }

    return 0;
}
