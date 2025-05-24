#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for(int i = 0; i < k; i++) {
      cin >> a[i];
    }

    int convertable = 0, ones = 0, operation = 0;

    sort(a.begin(), a.end());

    for(int i = 0 ; i < k - 1; i++) {
      if(a[i] >= 2) {
        ones += a[i];
        operation += (a[i] - 1);
      } else ones++;
    }

    
    cout << operation + ones << endl;
  }
  return 0;
}