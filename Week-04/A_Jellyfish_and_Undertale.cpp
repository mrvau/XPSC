#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    long long a, b, n;
    cin >> a >> b >> n;
    vector<long long> d(n);
    for (int i = 0; i < n; i++) {
      cin >> d[i];
    }

    sort(d.begin(), d.end());

    long long sec = b - 1;
    for (int i = 0; i < n; i++) {
      sec += (min(a, (d[i] + 1)) - 1);
    }
    cout << sec  + 1 << endl;
  }
  return 0;
}