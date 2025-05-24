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
    int m = n * (n - 1) / 2;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    int cnt = n - 1;
    int i = 0;
    while (i < m) {
      cout << a[i] << " ";
      i += cnt;
      cnt--;
    }
    cout << 1000000000 << endl;
  }
  return 0;
}