#include <iostream>
#include <string>
using namespace std;



int main()
{
    int ilosc_testow;

    cin>>ilosc_testow;
    while(ilosc_testow--)
    {
        string wynik, tekst;
        cin>>tekst;
        int ile=1, j=0;
        while(j< tekst.length())
        {
            ile =1;
            char aktualnyZnak = tekst[j];
            j++;
            while(j< tekst.length() && tekst[j]== aktualnyZnak)
            {
               j++;
               ile++;
            }
            if(ile == 1)
            {
                wynik +=aktualnyZnak;
            }else if(ile ==2)
            {
                wynik += aktualnyZnak;
                wynik += aktualnyZnak;
            }else{
                wynik += aktualnyZnak;
                wynik += to_string(ile);
            }
        }
        cout << wynik << endl;
    }
    return 0;
}
