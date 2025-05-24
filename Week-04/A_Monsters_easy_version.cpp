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
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }

    long long oneCnt = 0;
    sort(a.begin(), a.end());
    if(a[0] > 1) {
      oneCnt += (a[0] - 1);
      a[0] = 1;
    }
    for(int i = 1; i < n; i++) {
      if(a[i] != 1 && a[i] - a[i - 1] > 1) {
        oneCnt += (a[i] - (a[i - 1] + 1));
        a[i] = a[i - 1] + 1;
      }
    }
    cout << oneCnt << endl;
  }
  return 0;
}