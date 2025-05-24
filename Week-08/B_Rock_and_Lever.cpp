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
    vector<long long> a(n);
    map<long long, long long> m;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      m[__lg(a[i])]++;
    }
    long long cnt = 0;
    for (auto [x, y] : m) {
      cnt += ((y*(y-1))/2);
    }
    cout << cnt << endl;
  }
  return 0;
}