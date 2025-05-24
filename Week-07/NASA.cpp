#include <bits/stdc++.h>
using namespace std;

const int maxN = (1LL << 15);

bool isPalindrome(int x) {
  string s = to_string(x);
  string t = s;
  reverse(t.begin(), t.end());
  return s == t;
}

vector<int> palindrome;
void markPalindrome() {
  for(int i = 0; i < maxN; i++) {
    if(isPalindrome(i)) {
      palindrome.push_back(i);
    }
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  markPalindrome();
  while(t--) {
    int n;
    cin >> n;
    vector<int> a(n), cnt(maxN + 1);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      cnt[a[i]]++;
    }
    long long ans = n;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < palindrome.size(); j++) {
        int x = (a[i] ^ palindrome[j]);
        ans += cnt[x];
      }
    }
    cout << (ans / 2) << endl;
  }
  return 0;
}