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
    string s, a;
    cin >> s;

    bool canConvert = false;
    for(int i = 0; i < n; i++) {
      if(s[i] == '0') {
        if(!canConvert) {
          a.push_back(s[i]);
          canConvert = true;
        }
      } else {
        a.push_back(s[i]);
        canConvert = false;
      }
    }

    map<char, int> m;
    for(auto i : a) {
      m[i]++;
    }

    if(m['0'] < m['1']) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}