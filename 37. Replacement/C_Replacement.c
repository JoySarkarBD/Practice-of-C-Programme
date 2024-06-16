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

  // Replace every positive number with 1 and every negative number with 2
  for (int i = 0; i < N; i++)
  {
    if (A[i] > 0)
    {
      A[i] = 1;
    }
    else if (A[i] < 0)
    {
      A[i] = 2;
    }
  }

  // Print the modified array
  for (int i = 0; i < N; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n");

  return 0;
}
