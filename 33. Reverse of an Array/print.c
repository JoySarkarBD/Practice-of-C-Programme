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

  // Reverse the array
  for (int i = 0; i < n / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }

  // Print the elements of the reversed array
  printf("The elements of the reversed array are:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n"); // Print a newline at the end

  return 0;
}
