#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(k);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < k; i++) {
    cin >> b[i];
  }

  for(int i = 0; i < k; i++) {
    int l = 0, r = n - 1;
    bool ok = false;
    while(l <= r) {
      int mid = (l + r) / 2;
      if(a[mid] == b[i]) {
        ok = true;
        break;
      } else if(a[mid] < b[i]) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    cout << (ok ? "YES" : "NO") << endl;
  }
  return 0;
}