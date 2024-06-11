#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N); // Input the number of values

  int even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;

  for (int i = 0; i < N; i++)
  {
    int num;
    scanf("%d", &num); // Input each number

    // Check if the number is even
    if (num % 2 == 0)
    {
      even_count++;
    }
    else
    {
      odd_count++;
    }

    // Check if the number is positive
    if (num > 0)
    {
      positive_count++;
    }
    else if (num < 0)
    {
      negative_count++;
    }
  }

  // Output the counts
  printf("Even: %d\n", even_count);
  printf("Odd: %d\n", odd_count);
  printf("Positive: %d\n", positive_count);
  printf("Negative: %d\n", negative_count);

  return 0;
}
