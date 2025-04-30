#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    string s, c;
    cin >> s;
    set<int> ind;
    for(int i = 0; i < m; i++) {
      int x;
      cin >> x;
      ind.insert(x);
    }

    cin >> c;

    sort(c.begin(), c.end());
    int x = 0;
    for(auto i : ind) {
      s[i - 1] = c[x];
      x++;
    }

    cout << s << endl;

  }
  return 0;
}