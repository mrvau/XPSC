#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m), c;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }

  int l = 0, r = 0;
  
  while(l < n && r < m) {
    if(a[l] < b[r]) {
      c.push_back(a[l]);
      l++;
    } else if(b[r] < a[l]) {
      c.push_back(b[r]);
      r++;
    } else {
      c.push_back(a[l]);
      c.push_back(b[r]);
      l++, r++;
    }
  }

  while(l < n) {
    c.push_back(a[l]);
    l++;
  }
  while(r < m) {
    c.push_back(b[r]);
    r++;
  }

  for(auto i : c) {
    cout << i << ' ';
  }
  cout << endl;
  return 0;
}