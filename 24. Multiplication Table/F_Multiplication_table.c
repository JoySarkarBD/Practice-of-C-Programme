#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N); // Input the number N

  for (int i = 1; i <= 12; i++)
  {
    printf("%d * %d = %d\n", N, i, N * i); // Print the multiplication table
  }

  return 0;
}
