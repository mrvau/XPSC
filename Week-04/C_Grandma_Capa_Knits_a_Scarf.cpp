#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for(int i = 0; i < n; i++) {
      st.insert(s[i]);
    }

    int ans = INT_MAX;
    bool isPalindrome = true;

    for(auto c : st) {
      int l = 0, r = n - 1, cnt = 0;
      while(l < r) {
        if(s[l] != s[r]) {
          if (s[l] == c) {
            l++, cnt++;
          } else if (s[r] == c) {
            r--, cnt++;
          } else {
            cnt = n + 1;
            break;
          }
        } else {
          l++, r--;
        }
      }
      ans = min(ans, cnt);
    }

    cout << (ans <= n ? ans : -1 ) << endl;

  }
  return 0;
}