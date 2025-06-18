#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
  return a.second < b.second;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<pair<int, int>> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }
  sort(a.begin(), a.end(), cmp);
  int cnt = 1;
  stack<pair<int, int>> st;
  st.push(a[0]);
  for(int i = 0; i < n; i++) {
    if(a[i].first >= st.top().second) {
      st.push(a[i]);
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}