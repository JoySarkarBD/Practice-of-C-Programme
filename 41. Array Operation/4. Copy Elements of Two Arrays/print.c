#include <stdio.h>

int main()
{
  int n, m;

  // Prompt the user to enter the number of elements in the first array
  printf("Enter number of elements in the first array:\n");
  scanf("%d", &n);

  // Declare the first array of size n
  int arrayOne[n];

  // Prompt the user to enter the elements of the first array
  printf("Enter %d elements for the first array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arrayOne[i]);
  }

  // Prompt the user to enter the number of elements in the second array
  printf("Enter number of elements in the second array:\n");
  scanf("%d", &m);

  // Declare the second array of size m
  int arrayTwo[m];

  // Prompt the user to enter the elements of the second array
  printf("Enter %d elements for the second array:\n", m);
  for (int i = 0; i < m; i++)
  {
    scanf("%d", &arrayTwo[i]);
  }

  // Declare the resulting array of size n + m
  int ans[n + m];

  // Copy elements from arrayOne to ans
  for (int i = 0; i < n; i++)
  {
    ans[i] = arrayOne[i];
  }

  // Copy elements from arrayTwo to ans starting after arrayOne
  for (int i = 0; i < m; i++)
  {
    ans[n + i] = arrayTwo[i];
  }

  // Print the elements of the combined array ans
  printf("Combined array elements:\n");
  for (int i = 0; i < n + m; i++)
  {
    printf("%d ", ans[i]);
  }
  printf("\n");

  return 0;
}
