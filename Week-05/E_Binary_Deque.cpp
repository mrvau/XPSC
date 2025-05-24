#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }

    if(sum < s) {
      cout << -1 << endl;
      continue;
    }

    int l = 0, r = 0;
    int len = 0;
    int ms = 0;

    while(r < n) {
      ms += a[r];
      if(ms == s) {
        len = max(len, r - l + 1);
      } else {
        while(ms > s) {
          ms -= a[l];
          l++;
        }
      }
      r++;
    }

    cout << n - len << endl;

  }
  return 0;
}