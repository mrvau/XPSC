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
    int x = __lg(n);
    cout << n - (1LL << x) << " " << (1LL << x) << endl;
  }
  return 0;
}