#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int n;
  cin >> n;
  deque<int> cards(n);
  for (int i = 0; i < n; i++)
  {
    cin >> cards[i];
  }

  int s = 0, d = 0;
  bool se = true;
  while (!cards.empty())
  {
    int l = cards.size() - 1;
    if (se)
    {
      if (cards[0] > cards[l])
      {
        s += cards[0];
        cards.pop_front();
      }
      else
      {
        s += cards[l];
        cards.pop_back();
      }

      se = false;
    }
    else
    {
      if (cards[0] > cards[l])
      {
        d += cards[0];
        cards.pop_front();
      }
      else
      {
        d += cards[l];
        cards.pop_back();
      }

      se = true;
    }
  }
  cout << s << " " << d << endl;

  return 0;
}
