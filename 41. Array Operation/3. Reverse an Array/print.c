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

  // Print the reversed array
  printf("Reversed array is: ");
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%d ", ar[i]);
  }
  printf("\n");

  return 0;
}
