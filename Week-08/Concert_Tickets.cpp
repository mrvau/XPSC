#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    mp[a]++;
  }
  for(int i = 0; i < m; i++) {
    int a;
    cin >> a;
    auto it = mp.lower_bound(a);
    
    if(mp.empty()) {
      cout << -1 << endl;
    } else if(it == mp.begin() && it->first > a){
      cout << -1 << endl;
    } else {
      if(it == mp.end()) {
        --it;
        cout << it->first << endl;
        it->second--;
        if(it->second <= 0) {
          mp.erase(it);
        }
      } else if(it->first > a) {
        --it;
        cout << it->first << endl;
        it->second--;
        if(it->second <= 0) {
          mp.erase(it);
        }
      } else if(it->first == a) {
        cout << a << endl;
        it->second--;
        if(it->second <= 0) {
          mp.erase(it);
        }
      } else {
        cout << -1 << endl;
      }
    }
  }
  return 0;
}