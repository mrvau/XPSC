#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  string st = to_string(n);
  int s = st.size();
  vector<vector<int>> a(1<<s);
  for(int i = 0; i < (1<<s); i++) {
    for(int j = s - 1; j >= 0; j--) {
      a[i].push_back((i>>j)&1);
    }
  }
  if(n == 4) {
    cout << 1 << endl;
  } else if(n == 7) {
    cout << 2 << endl;
  } else {
    int ans = (1<<s) - 1;
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++) {
      bool ok = true;
      for(int j = 0; j < a[i].size(); j++) {
        if((st[j] == '4' && a[i][j] != 0) || (st[j] == '7' && a[i][j] != 1)) {
          ok = false;
          break;
        }
      }
      if(!ok) {
        ans++;
      } else {
        cout << ans << endl;
        break;
      }
    }
  }
  return 0;
}