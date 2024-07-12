#include <stdio.h>

int main()
{
  int n;

  // Prompt the user to enter the number of elements in the array
  printf("Enter number of elements in array:\n");
  scanf("%d", &n);

  // Declare an array of size n
  int ar[n];

  // Read the elements of the array from the user
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }

  int pos;

  // Prompt the user to enter the position of the element to remove
  printf("Enter the position of the element to remove:\n");
  scanf("%d", &pos);

  // Validate the position input (ensure it's within bounds)
  if (pos < 1 || pos > n)
  {
    printf("Invalid position! Please enter a position between 1 and %d\n", n);
    return 1;
  }

  // Shift elements to the left to remove the specified element
  for (int i = pos - 1; i < n - 1; i++)
  {
    ar[i] = ar[i + 1];
  }

  // Decrease the size of the array
  n--;

  // Print the resultant array
  printf("Resultant array is:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", ar[i]);
  }
  printf("\n");

  return 0;
}
