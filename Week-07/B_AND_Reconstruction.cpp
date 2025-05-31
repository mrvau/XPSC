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
    vector<int> a(n - 1), b;
    for(int i = 0; i < n - 1; i++) {
      cin >> a[i];
    }
    b.push_back(a[0]);
    for(int i = 1; i < n - 1; i++) {
      b.push_back(a[i - 1] | a[i]);
    }
    b.push_back(a.back());
    bool ok = true;
    for(int i = 1; i < n; i++) {
      if((b[i - 1] & b[i]) != a[i - 1]) {
        ok = false;
        break;
      }
    }
    if(ok) {
      for(auto i : b) {
        cout << i << ' ';
      }
      cout << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}