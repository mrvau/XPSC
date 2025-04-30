#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  map<string, int> m;
  while(n--) {
    string s;
    cin >> s;
    auto i = m.find(s);
    if(i != m.end()) {
      m[s]++;
      cout << s << m[s] << endl;
    } else{
      m[s] = 0;
      cout << "OK" << endl;
    }
  }
  return 0;
}