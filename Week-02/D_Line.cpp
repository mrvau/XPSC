#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long view = 0;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
      if (s[i] == 'L') {
        a[i] = i;
      } else {
        a[i] = n - i - 1;
      }
      view += a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
      long long t = n - a[i] - 1;
      long long res = view - a[i] + t;
      if(res > view) {
        view = res;
      }
      cout << view << " ";
    }

    cout << endl;
  }
  return 0;
}