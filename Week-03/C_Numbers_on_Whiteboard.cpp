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
    vector<int> a;
    vector<pair<int, int>> ans;
    for (int i = 1; i <= n; i++) {
      a.push_back(i);
    }
    for (int i = 0; i < n - 1; i++) {
      float c = a[a.size() - 1], d = a[a.size() - 2];
      ans.push_back({c, d});
      int x = int(ceil((c + d) / 2));
      a.pop_back();
      a.pop_back();
      a.push_back(x);
    }
    cout << a[0] << endl;
    for (auto i : ans) {
      cout << i.first << ' ' << i.second << endl;
    }
  }
  return 0;
}