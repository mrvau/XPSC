#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  while(k--) {
    int key, l = 0, r = n - 1, ans = -1;
    cin >> key;
    while(l <= r) {
      int mid = (l + r) / 2;
      if(a[mid] <= key) {
        ans = max(ans, mid);
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    cout << ans + 1 << endl;
  }
  return 0;
}