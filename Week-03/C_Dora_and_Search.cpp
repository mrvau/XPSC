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
    vector<int> a(n + 1);
    multiset<int> ml;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      ml.insert(a[i]);
    }

    int l = 1, r = n;
    if(n < 3) {
      cout << -1 << endl;
    } else {

      while (l < r) {
        int mn = *ml.begin();
        int mx = *ml.rbegin();
  
        if ((a[l] == mn || a[l] == mx) || (a[r] == mn || a[r] == mx)) {
          if (a[l] == mn || a[l] == mx) {
            ml.erase(ml.find(a[l]));
            l++;
          }
          if (a[r] == mn || a[r] == mx) {
            ml.erase(ml.find(a[r]));
            r--;
          }
        } else {
          break;
        }
      }
  
      if(l > 0 && r > 0 && l < r) {
        cout << l << " " << r << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }
  return 0;
}