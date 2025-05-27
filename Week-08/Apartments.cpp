#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, m, k;
  cin >> n >> m >> k;
  multiset<long long> a, b;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.insert(x);
  }
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    b.insert(x);
  }
  int cnt = 0;
  for (auto i = a.begin(); i != a.end(); i++) {
    if (k == 0) {
      auto x = b.lower_bound(*i);
      if (*x == *i) {
        cnt++;
        b.erase(x);
      }
    } else {
      auto x = b.lower_bound(*i - k);
      auto y = b.lower_bound(*i + k);
      if (x == y) {
        if (*x >= *i - k && *x <= *i + k) {
          cnt++;
          b.erase(x);
        }
      } else {
        for (auto j = x; j != y; j++) {
          if (*j >= *i - k && *j <= *i + k) {
            cnt++;
            b.erase(j);
            break;
          }
        }
      }
    }
  }
  cout << cnt << endl;

  return 0;
}