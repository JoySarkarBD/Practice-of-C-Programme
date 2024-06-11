#include <stdio.h>

int main()
{
  long long a, b, c, d;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d); // Input the four numbers

  // Check all possible combinations of operators
  if (a + b + c == d || a + b - c == d || a + b * c == d ||
      a - b + c == d || a - b - c == d || a - b * c == d ||
      a * b + c == d || a * b - c == d || a * b * c == d)
  {
    printf("YES\n"); // If any combination equals d, print YES
  }
  else
  {
    printf("NO\n"); // Otherwise, print NO
  }

  return 0;
}
