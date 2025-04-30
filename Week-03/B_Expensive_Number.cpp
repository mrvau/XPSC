#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    int idx = s.size() - 1, ans = 0;
    for(int i = idx; i >= 0; i--) {
      int n = s[i] - '0';
      if(n >= 1) {
        idx = i;
        break;
      } else {
        ans++;
      }
    }

    for(int i = 0; i < idx; i++) {
      if(s[i] != '0') {
        ans++;
      }
    }

    cout << ans << endl;
  }
  return 0;
}