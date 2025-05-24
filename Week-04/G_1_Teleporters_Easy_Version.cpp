#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n, c;
    cin >> n >> c;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) {
      cin >> a[i];
      a[i] += i;
    }

    sort(a.begin(), a.end());
    int tl = 0;
    for(int i = 1; i <= n; i++) {
      if(a[i] <= c) {
        c -= a[i];
        tl++;
      }
    }
    cout << tl << endl;
  }
  return 0;
}