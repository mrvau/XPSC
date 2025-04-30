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
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0, j = n - 1; i < j; i++, j--) {
      if(s[i] != s[j]) {
        cnt++;
      } else {
        break;
      }
    }
    cout << s.size() - (cnt * 2) << endl;
  }
  return 0;
}