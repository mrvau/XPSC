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
    string s;
    cin >> s;
    if(s[0] == s[s.size() - 1]) {
      cout << "NO" << endl;
    } else {
      bool t = true;
      map<char, int> m;
      for(int i = 0; i < n; i++) {
        m[s[i]]++;
      }
      if(m[s[0]] == n) {
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
      }
    }
  }
  return 0;
}