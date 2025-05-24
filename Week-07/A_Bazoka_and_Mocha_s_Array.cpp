#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n), b, c, d;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    b = a;
    d = a;
    sort(b.begin(), b.end());

    bool canSort = true;

    for (int i = 0; i < n; i++) {
      vector<int> x(a.begin(), a.begin() + 1);
      vector<int> y(a.begin() + 1, a.end());
      c.clear();
      c.insert(c.end(), y.begin(), y.end());
      c.insert(c.end(), x.begin(), x.end());

      if (c == b) {
        canSort = true;
        break;
      } else if (c == d) {
        canSort = false;
        break;
      }
      a = c;
    }
    if (canSort) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}