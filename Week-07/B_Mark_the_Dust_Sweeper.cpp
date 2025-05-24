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
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    long long ans = 0;
    int i = 0;
    while(a[i] == 0 && i < n) {
      i++;
    }
    for(int j = i; j < n - 1; j++) {
      ans += a[j];
      if(a[j] == 0) ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
