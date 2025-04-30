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
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    priority_queue<int> q;
    long long ans = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] == 0) {
        if(!q.empty()) {
          ans += q.top();
          q.pop();
        }
      } else {
        q.push(a[i]);
      }
    }
    cout << ans << endl;
  }
  return 0;
}