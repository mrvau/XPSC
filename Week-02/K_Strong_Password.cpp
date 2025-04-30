#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    bool duplicate = false;
    for (int i = 1; i < s.size(); i++) {
      if (s[i] == s[i - 1] && s[i] != 'z') {
        char c = s[i] + 1;
        auto insertPos = s.begin() + (i);
        s.insert(insertPos, c);
        duplicate = true;
        break;
      } else if (s[i] == s[i - 1] && s[i] == 'z') {
        char c = 'a';
        auto insertPos = s.begin() + (i);
        s.insert(insertPos, c);
        duplicate = true;
        break;
      }
    }

    if (duplicate) {
      cout << s << endl;
    } else {
      if (s[s.size() - 1] != 'z') {
        s += s[s.size() - 1] + 1;
      } else {
        s += s[s.size() - 1] - 1;
      }
      cout << s << endl;
    }
  }
  return 0;
}