#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> a(n), mx_arr, mn_arr;

    int mn = INT_MAX;
    int mx = INT_MIN;

    for(int i = 0; i < n; i++) {
      cin >> a[i];
      mn = min(mn, a[i]);
      mx = max(mx, a[i]);
    }

    mn_arr.push_back(mx);

    for(int i = 0; i < n; i++) {
      mn_arr.push_back(mn);
    }

    for(int i = 0; i < n; i++) {
      mx_arr.push_back(mx);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      cnt += (mx_arr[i] - mn_arr[i]);
    }
    cout << cnt << endl;
  }
  return 0;
}