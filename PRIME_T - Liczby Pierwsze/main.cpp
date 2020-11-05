#include <iostream>

using namespace std;
int n;
bool czy_pierwsza(int n)
{
    if(n<2)
    {
        return false;
    }
  for(int i=2;i*i<=n;i++)
    if(n%i==0)
      return false;
  return true;

}

int main()
{
    int x;
    cin >> x;
    for(int j=0;j<x;j++)
    {

    cin >> n;
    if(czy_pierwsza(n))
    {
        cout << "TAK"<<endl;
    }
    else
    {
        cout << "NIE"<< endl;
    }
    }
    return 0;
}
