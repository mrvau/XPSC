#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    map<int, set<int>> m;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      m[x].insert(i);
    }

    while (k--) {
      int a, b;
      cin >> a >> b;

      if (m.find(a) != m.end() && m.find(b) != m.end()) {
        

        auto firstIndex = *(m[a].begin());
        auto lastIndex = *(m[b].rbegin());

        if (firstIndex < lastIndex) {
          cout << "YES" << endl;
        } else {
          cout << "NO" << endl;
        }
      } else {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}