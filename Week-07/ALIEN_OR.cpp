#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<string> a(n), one;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (auto s : a) {
      int o = 0;
      for (int i = 0; i < k; i++) {
        if (s[i] == '1') o++;
      }
      if (o == 1) one.push_back(s);
    }

    bool ok = true;
    vector<bool> r(k, false);
    for (int i = 0; i < k; i++) {
      for (auto s : one) {
        if (s[i] == '1') {
          r[i] = true;
        }
      }
    }

    for(int i = 0; i < k; i++) {
      if(!r[i]) {
        ok = false;
        break;
      }
    }

    cout << (ok ? "YES" : "NO") << endl;
  }
  return 0;
}