#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  map<pair<string, string>, int> leaves;
  for(int i = 0; i < n; i++) {
    string species, color;
    cin >> species >> color;
    leaves[{species, color}]++;
  }

  cout << leaves.size() << endl;

  return 0;
}