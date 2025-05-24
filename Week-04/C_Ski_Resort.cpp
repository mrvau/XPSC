#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    long long n, k, q;
    cin >> n >> k >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    long long ans = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] <= q) {
        cnt++;
      } else {
        cnt = 0;
      }
      if(cnt >= k) {
        ans += (cnt - k) + 1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}