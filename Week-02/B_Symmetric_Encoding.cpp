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

    map<char, vector<int>> m;

    for (int i = 0; i < n; i++) {
      m[s[i]].push_back(i);
    }

    // c -> 9 -d
    // d -> 6 -d
    // e -> 1 5
    // f -> 4
    // o -> 3 8
    // r -> 2 -d
    // s -> 0 7 -d

    // 0 1 2 3 4 5 6 7 8 9
    // c o d e f o r c e s

    while (!m.empty()) {
      auto first = m.begin();
      auto last = m.rbegin();

      if (first->first != last->first) {
        for (auto i : first->second) {
          s[i] = last->first;
        }

        for (auto i : last->second) {
          s[i] = first->first;
        }

      } else {
        break;
      }
      m.erase(first);
      m.erase(--m.end());
    }

    cout << s << endl;
  }
  return 0;
}