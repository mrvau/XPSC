#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  long long s;
  cin >> n >> s;
  vector<long long> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  multiset<long long> m;

  int l = 0, r = 0;
  long long ans = 0;
  while(r < n) {
    m.insert(a[r]);
    long long mn = *m.begin();
    long long mx = *m.rbegin();

    if(mx - mn <= s) {
      ans += (r - l) + 1;
    } else {
      while(l <= r) {
        mn = *m.begin();
        mx = *m.rbegin();
        if(mx - mn <= s) break;
        m.erase(m.find(a[l]));
        l++;
      }
      mn = *m.begin();
      mx = *m.rbegin();
      if(mx - mn <= s) {
        ans += (r - l) + 1;
      }
    }
    r++;
  }
  cout << ans << endl;

  return 0;
}