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
    vector<string> a(n);
    map<string, int> s;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      s[a[i]]++;
    }
    
    map<char, int> fChar, sChar;
    long long total = 0;
    for(auto i : a) {
      fChar[i[0]]++;
      sChar[i[1]]++;
    }
    for (int i = 0; i < n; i++) {
      total += (fChar[a[i][0]] + sChar[a[i][1]]) - (2 * s[a[i]]);
    }
    cout << total / 2 << endl;
  } 
  return 0;
}