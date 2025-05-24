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
    long long sum = 0;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      sum += (1LL * abs(a[i]));
    }

    int r = 0, cnt = 0;

    while(r < n) {
      if(a[r] < 0) {
        while(a[r] <= 0) {
          r++;
        }
        cnt++;
      }
      r++;
    }
    cout << sum << " " << cnt << endl;
  }
  return 0;
}