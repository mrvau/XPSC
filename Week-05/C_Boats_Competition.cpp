#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());

    int mx = 0;
    for(int s = 2; s <= 2 * n; s++) {
      vector<int> f(n + 1, 0);
      for(auto i : a) {
        f[i]++;
      }
      int curr = 0;
      for(int i = 1; i <= n; i++) {
        int j = s - i;
        if(j < 1 || j > n) continue;
        if(i == j) {
          curr += f[i] / 2;
        } else if(i < j) {
          int cnt = min(f[i], f[j]);
          curr += cnt;
          f[i]--;
          f[j]--;
        }
      }
      mx = max(mx, curr);
    }

    cout << mx << endl;
  }
  return 0;
}