#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <iostream>

using namespace std;

typedef map<string,int> Map;

bool sort_fn(const pair<string,int>& a, const pair<string,int>& b)
{
  return a.second>b.second || (a.second==b.second && lexicographical_compare(a.first.begin(),a.first.end(),b.first.begin(),b.first.end()));
}

int main()
{
  ios_base::sync_with_stdio(0);
  string a,b,imie;
  Map m;
  while (cin >> a >> b >> imie)
    {
      transform(imie.begin(), imie.end(),imie.begin(), ::toupper);
      m[imie]++;
    }
  vector< pair<string,int> > v;
  v.reserve(m.size());
  for (Map::iterator it = m.begin(); it!=m.end(); ++it)
    v.push_back(*it);
  sort(v.begin(),v.end(),sort_fn);
  for (int i=0; i<v.size(); i++)
    {
      cout << v[i].first << ' ' << v[i].second << '\n';
    }

  return 0;
}
