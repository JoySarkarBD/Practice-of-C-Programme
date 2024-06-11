#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N); // Input the number N

  // Iterate from 1 to N and print divisors of N
  for (int i = 1; i <= N; i++)
  {
    if (N % i == 0)
    {
      printf("%d\n", i); // If i is a divisor of N, print it
    }
  }

  return 0;
}
