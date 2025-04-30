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
    vector<deque<int>> a(n, deque<int>(n - 1));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n - 1; j++) {
        cin >> a[i][j];
      }
    }

    map<int, pair<int, int>> m;

    int i, firstInt;

    for (int i = 0; i < n; i++) {
      int fstInt = a[i][0];

      if (m.find(fstInt) == m.end()) {
        m[fstInt] = {1, i};
      } else {
        firstInt = fstInt;
        m[fstInt] = {m[fstInt].first + 1, i};
      }
    }


    for (auto [fstInt, cntIdx] : m) {
      if (cntIdx.first == 1) {
        i = cntIdx.second;
        break;
      }
      
    }

    a[i].push_front(firstInt);
    for (auto i : a[i]) {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}