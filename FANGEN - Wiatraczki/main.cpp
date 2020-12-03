#include <iostream>
#include <cstdlib>
using namespace std;

enum Skret
{
    lewo,prawo
};
void Wypelnij(char **tab, int r)
{
    for(int i=0; i< r*2; i++)
    {
        for(int j=0; j< r*2; j++)
        {
            tab[i][j]='*';
        }
    }
}
void Wyswietl(char **tab, int r)
{
    for(int i=0; i< r*2; i++)
    {
        for(int j=0; j< r*2; j++)
        {
            cout << tab[i][j];
        }
        cout << endl;
    }
}
void Obrot(char **tab, Skret skret, int r)
{
    for(int i=0;i<r-1;i++) // Polowa tablicy
    {
        for(int j=i;j< 2*r-i-1;j++)
        {
            cout << j << " " << i << endl;
            if(skret == Skret::lewo)
            {

                if(j>=r)
                {
                    tab[j][i]='.';
                    tab[2*r-i-1][j]='.';
                }
                if(j< r && j>i)
                {
                    tab[j][2*r-i-1]='.';
                    tab[i][j] = '.';
                }
            }
            if(skret == Skret::prawo)
            {
                if(j < r && j>i)
                {
                    tab[j][i]='.';
                    tab[2*r-i-1][j] = '.';
                }
                if(j>= r)
                {
                    tab[j][2*r-i-1]='.';
                    tab[i][j] = '.';
                }
            }
            Wyswietl(tab,r);
        }
        cout << endl;
    }
}
int main()
{
    int r;
    Skret skret;
    do
    {
        cin >> r;
        if(r==0)
        {
            break;
        }
        else if(r>0)
        {
            skret = Skret::lewo;
        }
        else
        {
            skret = Skret::prawo;
        }
        r = abs(r);
        char **tab = new char*[r*2];
        for(int i = 0; i < r*2; i++)
        {
            tab[i] = new char[r*2];
        }
        Wypelnij(tab, r);
        Obrot(tab,skret,r);
        Wyswietl(tab, r);
    }
    while(r!=0);
    return 0;
}

