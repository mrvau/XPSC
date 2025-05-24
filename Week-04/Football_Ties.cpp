#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int x, y;
    cin >> x >> y;
    cout << min(x % 3, y % 3) << endl;
  }
  return 0;
}