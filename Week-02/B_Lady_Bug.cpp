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
    string a, b;
    cin >> a >> b;

    int evenA = 0, oddA = 0, evenB = 0, oddB = 0;
    for(int i = 0; i < n; i++) {
      if(i % 2 == 0) {
        if(a[i] == '1') {
          evenA++;
        }
        if(b[i] == '0') {
          evenB++;
        }
      } else {
        if (a[i] == '1') {
          oddA++;
        }
        if (b[i] == '0') {
          oddB++;
        }
      }
    }

    if(evenA <= oddB && oddA <= evenB) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}