#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<long long> a(n);
  for(int i = 0; i <n ; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  long long m = a[n / 2];
  long long ans = 0;
  for(int i = 0; i < n; i++) {
    ans += abs(a[i] - m);
  }
  cout << ans << endl;
  return 0;
}