#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, u = 0;
    cin >> n;
    deque<int> d(n);
    map<int, int> m;
    for (int i = 0; i < n; i++) {
      cin >> d[i];
    }
    for(int i = d.size() - 1; i >= 0; i--) {
      auto it = m.find(d[i]);
      if(it == m.end()) {
        m[d[i]]++;
        u++;
      } else {
        break;
      }
    }

    
    cout << n - u << endl;
  }
  return 0;
}