#include <iostream>

using namespace std;

int main()
{
    int ilosc_testow;

    cin>>ilosc_testow;
    while(ilosc_testow--)
    {
        int liczby;
        cin>>liczby;
        switch(liczby)
        {
        case 0:
        case 1:
            cout<<"0 1"<<endl;
            break;
        case 2:
            cout<<"0 2"<<endl;
            break;
        case 3:
            cout<<"0 6"<<endl;
            break;
        case 4:
            cout<<"2 4"<<endl;
            break;
        case 5:
        case 6:
        case 8:
            cout<<"2 0"<<endl;
            break;
        case 7:
            cout<<"4 0"<<endl;
            break;
        case 9:
            cout<<"8 0"<<endl;
            break;
        default:
            cout<<"0 0"<<endl;
            break;
        }
    }
    return 0;
}
