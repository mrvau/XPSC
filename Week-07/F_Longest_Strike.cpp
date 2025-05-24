#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
  return (a.second - a.first + 1) > (b.second - b.first + 1);
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      m[a[i]]++;
    }
    for (auto [x, c] : m) {
      if (c >= k) {
        // for (int i = 0; i < c; i++) {
        b.push_back(x);
        // }
      }
    }
    if(b.empty()) {
      cout << -1 << endl;
      continue;
    }
    
    int l = b.front(), r = b.front(), mxLen = 1, len = 1;
    for(int i = 1; i < b.size(); i++) {
      if(b[i] - b[i - 1] == 1) {
        len++;
        if(len > mxLen) {
          r = b[i];
          l = b[i - len + 1];
          mxLen = len;
        }
      } else {
        len = 1;
      }
    }
    cout << l << " " << r << endl;
  }
  return 0;
}