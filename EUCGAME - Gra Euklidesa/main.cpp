#include <iostream>

using namespace std;
int a,b,d,k;

int nwd(int a,int b)
{
    int c;
    while(b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main()
{
    cin >> d;
    if(d>0)
    {
        for(int i=0; i<d; i++)
        {
            cin >> a >> b;
            k=nwd(a,b);
            cout << k+k <<endl;
        }
    }
}
