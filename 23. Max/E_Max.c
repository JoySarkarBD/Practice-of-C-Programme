#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N); // Input the number of values

  int max_number = 0; // Initialize max_number to 0

  for (int i = 0; i < N; i++)
  {
    int num;
    scanf("%d", &num); // Input each number

    // Update max_number if the current number is greater
    if (num > max_number)
    {
      max_number = num;
    }
  }

  // Output the maximum number
  printf("%d\n", max_number);

  return 0;
}
