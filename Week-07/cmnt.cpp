// #include <bits/stdc++.h>
// using namespace std;
// bool cmp(pair<int, int> a, pair<int, int> b) {
//   return (a.second - a.first + 1) > (b.second - b.first + 1);
// }
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int t;
//   cin >> t;
//   while (t--) {
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//       cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     map<int, int> m;
//     stack<int> s;
//     vector<pair<int, int>> ans;
//     int l = 0, r = 0;
//     while (r < n) {
//       s.push(a[r]);
//       while (r < n && a[r] == s.top()) {
//         m[a[r]]++;
//         r++;
//       }
//       if (r < n && a[r] - s.top() > 1) {
//         if (m[s.top()] >= k) {
//           ans.push_back({l, r - 1});
//         } else {
//           s.pop();
//         }
//         l = r;
//         continue;
//       }
//       if (m[s.top()] >= k) {
//         ans.push_back({l, r - 1});
//       } else {
//         l = r;
//         s.pop();
//       }
//     }
//     sort(ans.begin(), ans.end(), cmp);
//     if (ans.size() == 0)
//       cout << -1 << endl;
//     else {
//       auto [x, y] = ans[0];
//       cout << a[x] << " " << a[y] << endl;
//     }
//   }
//   return 0;
// }