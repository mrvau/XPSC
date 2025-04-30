#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mp[a[i]]++;
    }

    int m;
    cin >> m;
    for (int q = 1; q <= m; q++) {
      string s;
      cin >> s;
      if (s.size() != n) {
        cout << "NO" << '\n';
        continue;
      }

      map<char, vector<int>> pos;
      for (int i = 0; i < s.size(); i++) {
        pos[s[i]].push_back(i);
      }

      bool ok = true;
      for (auto [x, y] : pos) {
        vector<int> v = y;
        int val = a[v[0]];
        if (v.size() != mp[val]) {
          ok = false;
          break;
        }
        for (int j = 1; j < v.size(); j++) {
          if (val != a[v[j]]) {
            ok = false;
            break;
          }
        }
      }

      if (ok) {
        cout << "YES" << '\n';
      } else {
        cout << "NO" << '\n';
      }
    }
  }
  return 0;
}