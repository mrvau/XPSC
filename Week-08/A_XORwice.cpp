#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    cout << ((max(a,b)^min(a, b)) + (min(a,b)^min(a,b))) << endl;
  }
  return 0;
}