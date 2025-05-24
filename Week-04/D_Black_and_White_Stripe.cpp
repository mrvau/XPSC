#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0, r = 0, ans = 0;
    priority_queue<int, vector<int>, greater<int>> pq;

    while (r < n) {
      if(s[r] == 'W') {
        ans++;
      }
      if(r - l + 1 == k) {
        pq.push(ans);
        if(s[l] == 'W') {
          ans--;
        }
        l++;
      }
      r++;
    }
    cout << pq.top() << endl;
  }
  return 0;
}