#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, a, b, p, q;
  cin >> n >> a >> b >> p >> q;
  long long x = (n / a), y = (n / b);
  long long g = __gcd(a, b);
  long long l = (a * b) / g;
  long long z = (n / l);
  if (p <= q) {
    x -= z;
  } else {
    y -= z;
  }

  long long c = (x * p) + (y * q);
  cout << c << endl;
  return 0;
}