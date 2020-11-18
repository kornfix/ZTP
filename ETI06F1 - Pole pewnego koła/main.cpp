#include <iostream>
#define M_PI 3.14159265358979323846
#include <math.h>

using namespace std;
long double r,d,S;
int main()
{
    cin >> r >>d;
    S = (pow(r,2)-(pow(d,2)/4.0))* M_PI;
    S = ceil(S*100);
    S = S/100;
    cout << endl << S;
    return 0;
}
