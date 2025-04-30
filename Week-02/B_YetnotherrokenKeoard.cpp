  #include <bits/stdc++.h>
  using namespace std;
  int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
      string s, ans;
      cin >> s;
      int bSm = 0, bCp = 0;
      for(int i = s.size() - 1; i >= 0; i--) {
        if(s[i] != 'b' && s[i] != 'B') {
          if(s[i] >= 'a' && s[i] <= 'z' && bSm == 0) {
            ans.push_back(s[i]);
          } else if(s[i] >= 'A' && s[i] <= 'Z' && bCp == 0) {
            ans.push_back(s[i]);
          } else if (s[i] >= 'a' && s[i] <= 'z' && bSm != 0) {
            bSm--;
          } else if (s[i] >= 'A' && s[i] <= 'Z' && bCp != 0) {
            bCp--;
          }
        } else if(s[i] == 'b') {
          bSm++;
        } else {
          bCp++;
        }
      }
      reverse(ans.begin(), ans.end());
      cout << ans << endl;
    }
    return 0;
  }