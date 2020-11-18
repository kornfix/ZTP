#define ANSI
#include <iostream>
#include <cstring>
using namespace std;
void printfloat(float liczba){
    for (int i = sizeof liczba-1; i>=0; --i){
        printf("%x ",(((const unsigned char*)&liczba)[i]));
    }
}
int main()
{
    int t;      /* ........................  Tu napisz potrzebne funkcje */
    float x;
    cin >> t; /* wczytaj liczbê testów */   while(t)
    {
        cin >> x;
        printfloat(x);
        t--;
    }
    return 0;
}
