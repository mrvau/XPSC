#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  for(int i = 0; i < (1<<n); i++) {
    cout << i << " -> ";
    for(int k = n - 1; k >= 0; k--) {
      cout << ((i>>k) & 1) << " ";
    }
    cout << endl;
  }
  return 0;
}