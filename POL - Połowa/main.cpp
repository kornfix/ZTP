#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ile;
    cin >>ile;
    for(int i=0; i<ile; i++)
    {
        string w;
        cin >>w;
        for(int i=0;i<w.length()/2;i++)
        {
            cout << w[i];
        }
        cout << endl;
    }
    return 0;
}
