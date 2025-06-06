#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int a, b;
    cin >> a >> b;
    long long ans = 1 % MOD;
    while(b) {
      if(b & 1) {
        ans = (ans % MOD * a % MOD) % MOD;
      }
      a = 1LL * a * a % MOD;
      b >>= 1;
    }
    cout << ans << endl;
  }
  return 0;
}