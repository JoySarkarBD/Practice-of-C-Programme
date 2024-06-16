#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N); // Input number of elements

  long long abs_sum = 0; // Initialize absolute sum as a long long to handle large values

  // Iterate through each element and compute absolute summation
  for (int i = 0; i < N; ++i)
  {
    int Ai;
    scanf("%d", &Ai); // Input each element

    // Add the absolute value of Ai to the absolute sum

    if (Ai > 0)
    {
      abs_sum += Ai;
    }
  }

  printf("%lld\n", abs_sum); // Output the absolute summation

  return 0;
}
