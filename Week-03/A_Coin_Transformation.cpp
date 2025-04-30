#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    long long int n;
    cin >> n;
    long long int cnt = 1;
    while(n > 3) {
      n /= 4;
      cnt *= 2;
    }
    cout << cnt << endl;
  }
  return 0;
}