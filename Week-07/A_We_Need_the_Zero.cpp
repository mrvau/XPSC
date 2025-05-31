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
    for(int i = 0;i < n; i++) {
      cin >> a[i];
    }
    int ans = -1;
    for(int i = 0; i < (1<<8); i++) {
      int x = 0;
      for(int j = 0; j < n; j++) {
        x ^= (a[j] ^ i);
      }
      if(x == 0) {
        ans = i;
        break;
      }
    }
    // cout << endl;
    cout << ans << endl;
  }
  return 0;
}