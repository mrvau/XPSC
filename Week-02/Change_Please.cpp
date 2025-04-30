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
    int r = 100 - n;
    if(r % 10 == 0) {
      cout << r << endl;
    } else {
      cout << (r /= 10) * 10 << endl;
    }
  }
  return 0;
}