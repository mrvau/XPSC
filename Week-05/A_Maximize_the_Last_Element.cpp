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
    vector<int> a(n);
    int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      if((i + 1) % 2 != 0) ans = max(ans, a[i]);
    }
    cout << ans << endl;
  }
  return 0;
}