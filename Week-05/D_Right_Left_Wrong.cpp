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
    vector<long long> a(n);
    long long sum = 0;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }

    string s;
    cin >> s;

    int l = 0, r = n - 1;
    long long ans = 0;
    while(l < r) {
      while(l < r) {
        if(s[l] == 'L') break;
        else {
          sum -= a[l];
          l++;
        }
      }

      while(r > l) {
        if(s[r] == 'R') break;
        else {
          sum -= a[r];
          r--;
        }
      }

      if(r <= l) break;
      ans += sum;
      sum -= a[l];
      l++;
      sum -= a[r];
      r--;
    }
    cout << ans << endl;
  }
  return 0;
}