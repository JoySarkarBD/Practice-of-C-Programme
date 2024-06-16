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

  // Print the positions and values of elements less than or equal to 10
  for (int i = 0; i < N; i++)
  {
    if (A[i] <= 10)
    {
      printf("A[%d] = %d\n", i, A[i]);
    }
  }

  return 0;
}
