#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m = 3;
    cin >> n;
    map<string, vector<int>> mp;
    for (int i = 1; i <= m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        string s;
        cin >> s;
        mp[s].push_back(i);
      }
    }

    vector<int> ans(m + 1);

    for (auto [x, y] : mp)
    {
      if (y.size() == 1)
      {
        ans[y[0]] += 3;
      }
      else if (y.size() == 2)
      {
        ans[y[0]]++;
        ans[y[1]]++;
      }
    }

    for (int i = 1; i < ans.size(); i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }

  return 0;
}