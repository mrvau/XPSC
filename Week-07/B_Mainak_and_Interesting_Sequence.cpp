#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    if (n % 2 == 0 && m % 2 != 0 || (n > m)) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
      if ((n % 2 != 0 && m % 2 != 0) || (n % 2 != 0 && m % 2 == 0)) {
        for (int i = 1; i < n; i++) {
          cout << 1 << " ";
        }
        cout << m - (n - 1) << endl;
      } else if (n % 2 == 0 && m % 2 == 0) {
        for (int i = 1; i < n - 1; i++) {
          cout << 1 << " ";
        }
        long long val = m - (n - 2);
        cout << val / 2 << " " << val / 2 << endl;
      }
    }
  }
  return 0;
}