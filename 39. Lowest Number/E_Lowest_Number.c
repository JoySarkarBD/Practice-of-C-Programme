#include <stdio.h>

int main()
{
  int N;

  // Read the number of elements
  scanf("%d", &N);

  int A[N];

  // Read the elements of the array
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
  }

  // Initialize minimum value and position
  int min_value = A[0];
  int min_position = 0;

  // Find the minimum value and its position
  for (int i = 1; i < N; i++)
  {
    if (A[i] < min_value)
    {
      min_value = A[i];
      min_position = i;
    }
  }

  // Print the lowest number and its position (1-indexed)
  printf("%d %d\n", min_value, min_position + 1);

  return 0;
}
