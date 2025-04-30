#include <bits/stdc++.h>
using namespace std;

class cmp {
 public:
  bool operator()(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
      return a.first < b.first;
    } else {
      return a.second > b.second;
    }
  }
};

bool cm(pair<int, int> a, pair<int, int> b) {
  if (a.first != b.first) {
    return a.first < b.first;
  } else {
    return a.second > b.second;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, sl = 1;
  cin >> n;
  set<pair<int, int>> s;
  multiset<pair<int, int>> ml;
  vector<int> ans;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    if (x == 1) {
      int m;
      cin >> m;
      s.insert({sl, m});
      ml.insert({m, -sl});
      sl++;
    } else if (x == 2) {
      int pos = s.begin()->first, money = s.begin()->second;
      ans.push_back(pos);
      s.erase(s.begin());
      ml.erase({money, -pos});
    } else {
      int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
      ans.push_back(pos);
      ml.erase(--ml.end());
      s.erase({pos, money});
    }
  }

  for(auto i : ans) {
    cout << i << " ";
  }
  return 0;
}