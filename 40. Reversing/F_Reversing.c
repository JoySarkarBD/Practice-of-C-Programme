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

  // Print the array in reversed order
  for (int i = N - 1; i >= 0; i--)
  {
    printf("%d ", A[i]);
  }

  printf("\n"); // For better formatting

  return 0;
}
