#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n, m, q;
    cin >> n >> m >> q;
    multiset<int> s;
    vector<int> o(m);
    for(int i = 0; i < m; i++) {
      cin >> o[i];
      s.insert(o[i]);
    }

    int l;
    int r;

    while(q--) {
      int a;
      cin >> a;
      auto up = s.upper_bound(a);
      if(up == s.end()) {
        cout << n - *(--up) << endl;
      } else if(up == s.begin()) {
        cout << *up - 1 << endl;
      } else {
        cout << (*up - *(--up)) / 2 << endl;
      }
    }
  }
  return 0;
}