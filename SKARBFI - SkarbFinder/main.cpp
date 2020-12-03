#include <iostream>

using namespace std;

int main()
{
    int ilosc_testow,n,kierunek, kroki;
    cin>>ilosc_testow;

    while(ilosc_testow--)
    {
        int *skarb = new int[2];
        skarb[0] = 0;
        skarb[1] = 0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin >> kierunek >> kroki;
            switch(kierunek)
            {
            case 0:
                skarb[0] += kroki;
                break;
            case 1:
                skarb[0] -=kroki;
                break;
            case 2:
                skarb[1] +=kroki;
                break;
            case 3:
                skarb[1] -=kroki;
                break;
            }
        }
        if(skarb[0]!=0 || skarb[1]!=0)
        {
            if(skarb[0] >0)
            {
                cout << "0 " << skarb[0] << endl;
            }
            else if(skarb[0]<0)
            {
                cout << "1 " << (-1*skarb[0]) << endl;
            }
            if(skarb[1] >0)
            {
                cout << "2 " << skarb[1] << endl;
            }
            else if(skarb[1]<0)
            {
                cout << "3 " << (-1*skarb[1]) << endl;
            }
        }
        else
        {
            cout << "studnia" << endl;
        }

    }
    return 0;
}
