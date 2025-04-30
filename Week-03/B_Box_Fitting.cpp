#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, w;
    cin >> n >> w;
    multiset<int> s;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      s.insert(x);
    }

    int currWidth = w, h = 1;
    while(!s.empty()) {
      auto it = s.upper_bound(currWidth);
      if(it != s.begin()) {
        it--;
        currWidth -= *it;
        s.erase(it);
      } else {
        h++;
        currWidth = w;
      }
    }
    cout << h << endl;
  }
  return 0;
}