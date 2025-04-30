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
    map<int, int> intOccurance;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      intOccurance[a[i]]++;
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
      string s;
      cin >> s;
      if(s.size() != n) {
        cout << "NO" << endl;
      } else {
        map<char, vector<int>> charPos;
        bool flag = true;
        for(int j = 0; j < s.size(); j++) {
          charPos[s[j]].push_back(j);
        }

        for(auto [c, v] : charPos) {
          int val = a[v[0]];
          if(v.size() != intOccurance[val]) {
            flag = false;
            break;
          }
          for(int j = 1; j < v.size(); j++) {
            if(val != a[v[j]]) {
              flag = false;
              break;
            }
          }
        }
        cout << (flag ? "YES" : "NO") << endl;
      }
    }
  }
  return 0;
}