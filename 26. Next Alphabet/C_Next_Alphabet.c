#include <stdio.h>

int main()
{
  char c;
  scanf("%c", &c); // Input the lowercase alphabet character

  // Increment the character by one to get the next character
  char next_char = c + 1;

  printf("%c\n", next_char); // Print the next character

  return 0;
}
