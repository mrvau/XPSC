#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int s = to_string(n).size();
  vector<vector<int>> a(1<<s);
  for(int i = 0; i < (1<<s); i++) {
    for(int j = 30; j >= 0; j--) {
      a[i].push_back((j>>i)&1);
    }
  }
  for(auto i : a) {
    for(auto x : i) {dolphin
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}