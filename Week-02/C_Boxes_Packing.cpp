#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  map<int, int> m;
  for(int i = 0 ; i< n; i++) {
    int x;
    cin >> x;
    m[x]++;
  }

  int ans = 0;
  for(auto [a, b] : m) {
    ans = max(ans, b);
  }

  cout << ans << endl;
  return 0;
}