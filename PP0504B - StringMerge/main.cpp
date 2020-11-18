#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

#define T_SIZE 1001

char* string_merge(char *s1, char *s2)
{
    int f=0;
    int z= min(strlen(s1), strlen(s2));
    char *tab = new char [z*2+1];
    for(int i =0; i<z; i++)
    {
        tab[f] = s1[i];
        f++;
        tab[f] = s2[i];
        f++;
    }
    tab[f] = '\0';
    return tab;

}

int main()
{
    int t,n;
    char S1[T_SIZE], S2[T_SIZE], *S;
    cin >> t; /* wczytaj liczbê testów */
    cin.getline(S1,T_SIZE);
    while(t)
    {
        cin.getline(S1,T_SIZE,' ');
        cin.getline(S2,T_SIZE);
        S=string_merge(S1,S2);
        cout << S << endl;
        delete[] S;
        t--;
    }
    return 0;
}

