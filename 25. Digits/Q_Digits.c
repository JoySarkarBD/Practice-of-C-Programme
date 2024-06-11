#include <stdio.h>

int main()
{
  int T;
  scanf("%d", &T); // Input the number of test cases

  while (T--)
  {
    int N;
    scanf("%d", &N); // Input the number N for the current test case

    // Print the digits of N from right to left separated by space
    while (N > 0)
    {
      printf("%d ", N % 10); // Print the rightmost digit
      N /= 10;               // Remove the rightmost digit by integer division
    }

    printf("\n"); // Move to the next line for the next test case
  }

  return 0;
}
