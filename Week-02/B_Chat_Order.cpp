#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<string> chat(n), finalChat;
  map<string, int> m;
  for(int i = 0; i < n; i++) {
    cin >> chat[i];
    m[chat[i]]++;
  }

  for(int i = n - 1; i >= 0; i--) {
    auto it = m.find(chat[i]);
    if(it != m.end()) {
      finalChat.push_back(chat[i]);
      m.erase(chat[i]);
    }
  }

  for(auto c : finalChat) {
    cout << c << endl;
  }

  return 0;
}