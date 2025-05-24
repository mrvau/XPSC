#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> mono(n), poly(m), ans;
    for(int i = 0; i < n; i++) {
      cin >> mono[i];
    }
    for(int i = 0; i < m; i++) {
      cin >> poly[i];
    }

    int i = 0, j = 0;
    bool sequence = true;

    while(i < n || j < m) {
      if(mono[i] <= k && mono[i] != 0 && i < n) {
        ans.push_back(mono[i]);
        i++;
      } else if(poly[j] <= k && poly[j] != 0 && j < m) {
        ans.push_back(poly[j]);
        j++;
      } else if(i < n && mono[i] == 0) {
        ans.push_back(mono[i]);
        k++;
        i++;
      } else if(j < m && poly[j] == 0) {
        ans.push_back(poly[j]);
        j++;
        k++;
      } else {
        sequence = false;
        break;
      }
    }

    if(sequence) {
      for(auto i : ans) {
        cout << i << " ";
      }
      cout << endl;
    } else {
      cout << -1 << endl;
    }

  }
  return 0;
}