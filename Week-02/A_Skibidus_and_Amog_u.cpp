#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    if(s == "us") {
      cout << "i" << endl;
    } else {
      s.pop_back();
      s.pop_back();
      s.push_back('i');
      cout << s << endl;
    }
  }
  return 0;
}