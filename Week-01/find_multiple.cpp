#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  int i = 1;
  while(true)
  {
    int x = c * i;
    if(x >= a && x <= b){
      cout << x << endl;
      break;
    }
    else if(x > b)
    {
      cout << -1 << endl;
      break;
    }
    i++;
  }
  return 0;
}