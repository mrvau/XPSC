#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i].first >> a[i].second;
    }
    if (a[0].first >= s) {
      cout << "YES" << endl;
    } else {
      bool ok = false;
      for (int i = 0; i < n; i++) {
        if (a[i + 1].first - a[i].second >= s && i + 1 < n) {
          ok = true;
          break;
        } else if(i == n - 1) {
          if(m - a[i].second >= s) {
            ok = true;
            break;
          }
        }
      }
      cout << (ok ? "YES" : "NO") << endl;
    }
  }
  return 0;
}