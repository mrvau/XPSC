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

  map<int, int> m;
  int l = 0, r = 0;
  long long ans = 0;
  while(r <= n) {
    if(m.size() <= k) {
      ans += (r - l);
      if(r < n) {
        m[a[r]]++;
      }
      r++;
    } else {
      m[a[l]]--;
      if(m[a[l]] == 0) {
        m.erase(a[l]);
      }
      l++;
    }
  }
  cout << ans << endl;
  return 0;
}