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
    int mx = a[0], mn = a[0];
    for(int i = 0;i < n; i++) {
      mx |= a[i];
      mn &= a[i];
    }
    cout << mx - mn << endl;
  }
  return 0;
}