#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void spare(string s, int l, int min)
{
	for (int i = min; i <= l / 2; i++)
	{
		spare(s + to_string(i) + " ", l - i, i);
	}
	s = s + to_string(l);
	cout << s << "\n";
}

int main()
{
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		spare("", m, 1);
	}
	return 0;
}
