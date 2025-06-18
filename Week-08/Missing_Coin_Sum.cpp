#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<long long> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector<long long> p(n);
  p[0] = a[0];
  for(int i = 1; i < n; i++) {
    p[i] = p[i - 1] + a[i];
  }
  for(int i = 1; i < n; i++) {
    if(a[i] - a[i - 1] > 1) {
      cout << p[i - 1] + 1 << endl;
      break;
    }
  }
  return 0;
}