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
    string s;
    cin >> s;
    string t(n, 'W');
    int l = 0, r = 0, ans = 0;
    while (r < n && l < n) {
      if (s != t) {
        ans++;
      }
      while (l < n && s[l] != 'B') {
        l++;
        r = l;
      }
      while (r < n && (r - l) + 1 <= k) {
        if (s[r] != 'W') {
          s[r] = 'W';
        }
        r++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}