#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    long long a = 0, b, c, d;
    cin >> b >> c >> d;
    a = b;
    int m = max({__lg(b), __lg(c), __lg(d)});
    for(int i = 0; i <= m; i++) {
      if(!((b>>i)&1) && ((d>>i)&1)) {
        a = (a|(1LL<<i));
      }

      if(((b>>i)&1) && ((d>>i)&1)) {
        a = (a&(~(1LL<<i)));
      }
    }
    if((a|b) - (a&c) == d) {
      cout << a << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}