#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> a(n);
  vector<vector<int>> combo(1 << n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < (1 << n); i++) {
    for (int k = 0; k < n; k++) {
      combo[i].push_back((i >> k) & 1);
    }
  }
  bool ok = false;
  for (auto c : combo) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
      if(c[i] == 1) sum += a[i];
      else sum -= a[i];
    }
    if(sum % 360 == 0) {
      ok = true;
      break;
    }
  }

  cout << (ok ? "YES" : "NO") << endl;

  return 0;
}