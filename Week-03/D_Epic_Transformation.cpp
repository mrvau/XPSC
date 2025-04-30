#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    map<int, int> m;
    priority_queue<int> pq;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      m[x]++;
    }
    for(auto [a, b] : m) {
      pq.push(b);
    }

    while(!pq.empty()) {
      if(pq.size() < 2) {
        break;
      }
      int f = pq.top();
      pq.pop();
      int s = pq.top();
      pq.pop();

      f--;
      s--;

      if(f > 0) {
        pq.push(f);
      }
      if(s > 0) {
        pq.push(s);
      }
    }

    int ans = 0;
    while(!pq.empty()) {
      ans += pq.top();
      pq.pop();
    }

    cout << ans << endl;
  }
  return 0;
}