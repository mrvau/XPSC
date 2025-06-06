#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(m + 1);
  for (int i = 0; i <= m; i++) {
    cin >> a[i];
  }
  int cnt = 0;

  for (int j = 0; j < m; j++) {
    int x = 0;
    for (int i = 0; i <= n; i++) {
      if (((a[j] >> i) & 1) != ((a[m] >> i) & 1)) {            
        x++;
      }            
    }
    if(x <= k) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}