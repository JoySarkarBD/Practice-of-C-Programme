#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N); // Input the number N

  // Extract the tens digit and the ones digit
  int tens_digit = N / 10;
  int ones_digit = N % 10;

  // Check if one of the digits is divisible by the other
  if (tens_digit != 0 && ones_digit != 0 && (tens_digit % ones_digit == 0 || ones_digit % tens_digit == 0))
  {
    printf("YES\n"); // If true, print YES
  }
  else
  {
    printf("NO\n"); // Otherwise, print NO
  }

  return 0;
}
