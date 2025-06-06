#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  while (q--) {
    int key, l = 0, r = n - 1, ans = -1;
    cin >> key;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (a[mid] == key) {
        ans = mid;
        l = mid + 1;
      } else if (a[mid] < key) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}