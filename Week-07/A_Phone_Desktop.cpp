#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) {
      cout << 0 << endl;
    } else if (x == 0 && y != 0) {
      cout << (y + 1) / 2 << endl;
    } else if (y == 0 && x != 0) {
      cout << (x + 14) / 15 << endl;
    } else {
      int screen = (y + 1) / 2;
      int remaining = 15 * screen - 4 * y;
      x -= remaining;
      if(x > 0) {
        screen += ((x + 14) / 15);
      }
      cout << screen << endl;
    }
  }
  return 0;
}