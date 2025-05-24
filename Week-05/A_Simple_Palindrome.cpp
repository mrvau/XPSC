#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  string v = "aeiou";
  while(t--) {
    int n;
    cin >> n;
    map<char, int> m;
    for(int i = 0; i < n; i++) {
      m[v[i % 5]]++;
    }
    for(auto [ch, cnt] : m) {
      for(int i = 0; i < cnt; i++) {
        cout << ch;
      }
    }
    cout << endl;
  }
  return 0;
}