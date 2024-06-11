#include <stdio.h>

int main()
{
  int password;

  // Read each password until end of file
  while (scanf("%d", &password) != EOF)
  {
    // Check if the password is correct
    if (password == 1999)
    {
      printf("Correct\n");
      // Terminate the program after printing "Correct"
      return 0;
    }
    else
    {
      printf("Wrong\n");
    }
  }

  return 0;
}
