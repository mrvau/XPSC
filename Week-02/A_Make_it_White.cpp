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
    int fB = 0;
    int lB = n - 1;
    for(int i = 0; i < n; i++) {
      if(s[i] == 'B') {
        fB = i;
        break;
      }
    }
    for(int i = n - 1; i >= 0; i--) {
      if(s[i] == 'B')
      {
        lB = i;
        break;
      }
    }

    cout << (lB - fB) + 1 << endl;
  }
  return 0;
}