#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ile,dlugosc,dlugosc2;
    string napis, napis2;
    cin>>ile;
    for(int a=0; a<ile; a++)
    {
        int ile_znakow=0;
        cin>>dlugosc;
        cin>>napis;
        cin>>dlugosc2;
        cin>>napis2;
        int **tab = new int*[dlugosc+1];
        for(int i = 0; i <=dlugosc; ++i)
        {
            tab[i] = new int[dlugosc2+1];
            tab[i][0] = 0;

        }
        for(int j=0;j<=dlugosc2;j++)
        {
            tab[0][j] = 0;
        }
        for(int i=1; i<=dlugosc; i++)
        {

            for(int j=1; j<=dlugosc2; j++)
            {
                if(napis[i-1]==napis2[j-1])
                {
                    tab[i][j] = tab[i-1][j-1] + 1;
                }else{
                    tab[i][j] = max(tab[i-1][j], tab[i][j-1]);
                }
            }
        }
        cout<<tab[dlugosc][dlugosc2]<<endl;
    }
    return 0;
}
