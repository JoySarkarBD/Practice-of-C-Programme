#include <stdio.h>

int main()
{
  long long a, b;
  scanf("%lld %lld", &a, &b); // Input the numbers a and b

  long long result = a - b; // Calculate the value of a - b

  // If the result is greater than or equal to 0, print it; otherwise, print 0
  if (result >= 0)
  {
    printf("%lld\n", result);
  }
  else
  {
    printf("0\n");
  }

  return 0;
}
