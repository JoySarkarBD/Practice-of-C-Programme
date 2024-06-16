#include <stdio.h>

int main()
{
  int n; // Variable to store the size of the array

  // Prompt the user to enter the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  // Check if the size of the array is valid
  if (n <= 0)
  {
    printf("Invalid size for the array.\n");
    return 1;
  }

  int arr[n]; // Declare an array of size 'n'

  // Read the elements of the array from the user
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  // Calculate the sum of the array elements
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  // Print the sum of the array elements
  printf("The sum of the array elements is: %d\n", sum);

  return 0;
}
