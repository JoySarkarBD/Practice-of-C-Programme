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

  int X;

  // Read the number X
  scanf("%d", &X);

  // Initialize position as -1 (not found)
  int position = -1;

  // Traverse the array to find the first occurrence of X
  for (int i = 0; i < N; i++)
  {
    if (A[i] == X)
    {
      position = i;
      break;
    }
  }

  // Print the position (0-indexed) or -1 if not found
  printf("%d\n", position);

  return 0;
}
