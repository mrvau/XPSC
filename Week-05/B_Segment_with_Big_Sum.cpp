#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, s;
  cin >> n >> s;
  vector<long long> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long l = 0, r = 0, ans = INT_MAX, sum = 0;
  while(r < n) {
    sum += a[r];
    while(sum >= s) {
      ans = min(ans, (r - l) + 1);
      sum -= a[l];
      l++;
    }
    r++;
  }
  cout << (ans == INT_MAX ? -1 : ans) << endl;
  return 0;
}