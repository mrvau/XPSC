#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  map<string, string> server;

  for(int i = 0; i < n; i++) {
    string name, ip;
    cin >> name >> ip;
    ip += ';';
    server[ip] = '#' + name;
  }
  
  for(int i = 0; i < m; i++) {
    string com, ip;
    cin >> com >> ip;

    string name = server[ip];
    cout << com << " " << ip << " " << name << endl; 
  }
  return 0;
}