#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while(T--) {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if(s == t) cout << "YES" << endl;
    else if(s[0] == '1') cout << "YES" << endl;
    else {
      int firstOne = -1;
      int firstMismatch = -1;
      for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
          firstOne = i;
          break;
        }
      }
      for(int i = 0; i < n; i++) {
        if(s[i] != t[i]) {
          firstMismatch = i;
          break;
        }
      }
      if(firstOne == -1) {
        cout << "NO" << endl;
      } else if(firstMismatch < firstOne) {
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
      }
    }
  }
  return 0;
}