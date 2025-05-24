  #include <bits/stdc++.h>
  using namespace std;
  int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
      int n, k;
      cin >> n >> k;
      vector<int> f(n), h(n);
      for (int i = 0; i < n; i++) cin >> f[i];
      for (int i = 0; i < n; i++) cin >> h[i];

      int l = 0, r = 0, sum = 0, ans = 0;
      while (r < n) {
        sum += f[r];
        if ((r + 1 < n) && (sum <= k) && (h[r] % h[r + 1] == 0)) {
          ans = max(ans, (r - l) + 1);
          r++;
        } else {
          if ((r + 1 < n) && (h[r] % h[r + 1] != 0)) {
            if(sum <= k) {
              ans = max(ans, (r - l) + 1);
            }
            l = r + 1;
            r = l;
            sum = 0;
          } else {
            if (sum <= k) {
              ans = max(ans, (r - l) + 1);
            }
            sum -= f[l];
            l++, r++;
          }
        }
      }

      cout << ans << endl;
    }
    return 0;
  }