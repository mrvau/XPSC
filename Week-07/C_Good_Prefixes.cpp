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
    long long cnt = 0, sum = 0;
    vector<long long> a(n), p(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    long long mx = 0;
    for(int i = 0; i < n; i++) {
      mx = max(mx, a[i]);
      sum += a[i];
      if(sum - mx == mx) cnt++;
    }
    cout << cnt << endl;
    
  }
  return 0;
}