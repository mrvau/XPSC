#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, x;
  cin >> n >> x;
  
  vector<int> a(n);
  
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int l = 0, r = n - 1, ans = 0;
  while(l <= r) {
    if(a[l] + a[r] <= x) {
      l++, r--;
    } else {
      r--;
    }
    ans++;
  }
  cout << ans << endl;
  return 0;
}