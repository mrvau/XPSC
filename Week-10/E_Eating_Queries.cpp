#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n, q;
    cin >> n >> q;
    vector<int> a(n), pre;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    pre.push_back(a[0]);
    for(int i = 1; i < n; i++) {
      pre.push_back((a[i] + pre[i - 1]));
    }
    while(q--) {
      int key, l = 0, r = n - 1, ans = -1;
      cin >> key;
      while(l <= r) {
        int mid = l + (r - l) / 2;
        if(pre[mid] >= key) {
          ans = mid;
          r = mid - 1;
        } else {
          l = mid + 1;
        }
      }
      cout << (ans == -1 ? -1 : ans + 1) << endl;
    }
  }
  return 0;
}