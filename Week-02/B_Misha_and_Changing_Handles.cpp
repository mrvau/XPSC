#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q;
  cin >> q;
  map<string, string> ans, has;
  while (q--)
  {
    string a, b;
    cin >> a >> b;

    if (has.find(a) != has.end())
    {
      string old = has[a];
      ans[old] = b;
      has[b] = old;
      has.erase(a);
    }
    else
    {
      ans[a] = b;
      has[b] = a;
    }
  }

  cout << ans.size() << endl;

  for (auto [a, b] : ans)
  {
    cout << a << " " << b << endl;
  }

  return 0;
}