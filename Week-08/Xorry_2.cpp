#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int x;
    cin >> x;
    int a, b, msb = __lg(x);
    b = (1 << msb);
    a = (x ^ b);

    int sum = b, cnt = 0;
    for(int i = 0 ; i <= msb; i++) {
      if(!((a>>i)&1) && !((b>>i)&1) && (sum + (1 << i) <= x)) {
        cnt++;
        sum += (1 << i);
      }
    }
    cout << (1 << cnt) << endl;
  }
  return 0;
}