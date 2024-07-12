#include <stdio.h>

int main()
{
  int n;

  // Prompt the user to enter the number of elements in the array
  printf("Enter number of elements in array:\n");
  scanf("%d", &n);

  // Declare an array of size n+1 to accommodate the new element
  int ar[n + 1];

  // Read the elements of the array from the user
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }

  int pos, val;

  // Prompt the user to enter the position and value of the new element to insert
  printf("Enter the position and value to insert:\n");
  scanf("%d %d", &pos, &val);

  // Validate the position input (ensure it's within bounds)
  if (pos < 1 || pos > n + 1)
  {
    printf("Invalid position! Please enter a position between 1 and %d\n", n + 1);
    return 1;
  }

  // Shift elements to the right to make space for the new element
  for (int i = n; i >= pos; i--)
  {
    ar[i] = ar[i - 1];
  }

  // Insert the new value at the specified position
  ar[pos - 1] = val;

  // Print the resultant array
  printf("Resultant array is:\n");
  for (int i = 0; i <= n; i++)
  {
    printf("%d ", ar[i]);
  }
  printf("\n");

  return 0;
}
