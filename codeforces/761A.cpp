/*
761A
On her way to programming school tiger Dasha faced her first test — a huge staircase!


The steps were numbered from one to infinity. As we know, tigers are very fond of all striped things, it is 
possible that it has something to do with their color. So on some interval of her way she calculated two 
values — the number of steps with even and odd numbers.

You need to check whether there is an interval of steps from the l-th to the r-th (1 ≤ l ≤ r), for which 
values that Dasha has found are correct.

Input
In the only line you are given two integers a, b (0 ≤ a, b ≤ 100) — the number of even and odd steps, 
accordingly.

Output
In the only line print "YES", if the interval of steps described above exists, and "NO" otherwise.
*/
/* Accepted 15 ms 2036 KB */

#include <iostream>

int main()
{
  int a, b;
  std::cin >> a >> b;
  if(a == 0 && b == 0){
      std::cout << "NO" << '\n';
      return 0;
  }
  if(a+1 == b || b+1 == a || a == b)
    std::cout << "YES" << '\n';
  else
    std::cout << "NO" << '\n';
  return 0;
}
