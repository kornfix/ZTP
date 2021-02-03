#include <iostream>
#include <vector>

using namespace std;

void podzb(vector <int> T, vector <int> A, int k) {
    if(k == 0) {
        for(int i = 0; i < A.size(); i++)
            cout << A[i] << " ";
        cout << endl;
    }
    else if(k == T.size()) {
        for(int i = 0; i < A.size(); i++)
            cout << A[i] << " ";
        for(int i = 0; i < T.size(); i++)
            cout << T[i] << " ";
        cout << endl;
    }
    else {
        A.push_back(T[0]);
        T.erase(T.begin());
        podzb(T, A, k - 1);
        A.pop_back();
        podzb(T, A, k);
    }
}

int main() {
    int t, n, k;
    vector <int> T, A;
    cin >> t;

    for(int i=0;i<t;i++){
        cin >> n >> k;

        for(int i = 0; i < n; i++){
            T.push_back(i + 1);
        }
        podzb(T, A, k);
        T.clear();
    }
}


