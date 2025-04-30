#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  map<string, bool> m;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    auto it = m.find(s);
    if(it == m.end()) {
      cout << "NO" << endl;
      m[s] = true;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}