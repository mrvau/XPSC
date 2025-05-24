#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int a, b, c;
    cin >> a >> b >> c;

    int tm = (abs(b - c) + abs(c - 1));

    if(a == 1) {
      cout << 1 << endl;
    } else if(a > b && b > c) {
      cout << 2 << endl;
    } else {
      if(a - 1 < tm) {
        cout << 1 << endl;
      } else if(a - 1 > tm) {
        cout << 2 << endl;
      } else {
        cout << 3 << endl;
      }
    }
  }
  return 0;
}