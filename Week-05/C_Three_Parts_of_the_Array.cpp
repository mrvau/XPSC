#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];

  long long ans = 0, l = 0, r = 0;

  int i = 0, j = n - 1;
  while(i <= j) {
    if(l <= r) l += a[i++];
    else r += a[j--];
    if(l == r) ans = l;
  }

  cout << ans << endl;
  
  return 0;
}