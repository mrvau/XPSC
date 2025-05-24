#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  long long s;
  cin >> n >> s;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long l = 0, r = 0, ans = 0;
  long long sum = 0;
  while (r < n) {
    sum += a[r];
    if (sum <= s) {
      ans += (r - l) + 1;
    } else {
      while(sum > s) {
        sum -= a[l];
        l++;
      }
      ans += (r - l) + 1;
    }
    r++;
  }
  cout << ans << endl;
  return 0;
}