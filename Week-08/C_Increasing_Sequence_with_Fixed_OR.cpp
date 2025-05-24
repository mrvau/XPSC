#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    vector<long long> seq;
    seq.push_back(n);
    int x = __lg(n);
    for (int i = 0; i <= x; i++) {
      if ((((n >> i) & 1) == 1) && n-(1LL<<i) != 0) {
        seq.push_back(n - (1LL << i));
      }
    }
    cout << seq.size() << endl;
    reverse(seq.begin(), seq.end());
    for (auto i : seq) {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}