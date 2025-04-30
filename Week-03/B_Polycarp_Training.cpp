#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  multiset<int> s;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    s.insert(x);
  }

  int ans = 0, problems = 1;
  
  while(!s.empty()) {
    auto lb = s.lower_bound(problems);
    if(lb != s.end()) {
      ans++;
      s.erase(lb);
    } else {
      break;
    }
    problems++;
  }
  cout << ans << endl;
  return 0;
}