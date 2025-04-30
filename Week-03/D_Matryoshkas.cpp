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
    multiset<int> a;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a.insert(x);
    }
    int ans = 0;
    while(!a.empty()) {
      auto curr = a.begin();
      while(!a.empty()) {
        auto x = a.find(*curr + 1);
        if(x != a.end()) {
          a.erase(curr);
          curr = x;
        } else {
          ans++;
          a.erase(curr);
          break;
        }
      }
    }

    cout << ans << endl;

  }
  return 0;
}