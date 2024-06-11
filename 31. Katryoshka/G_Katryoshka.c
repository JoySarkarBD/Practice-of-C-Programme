#include <stdio.h>

int main()
{
  long long eyes, faces, bodies;
  scanf("%lld %lld %lld", &eyes, &faces, &bodies); // Input the counts of eyes, faces, and bodies

  // Calculate the maximum number of idols that can be made using option 3
  long long idols_option3 = eyes < faces ? (eyes < bodies ? eyes : bodies) : (faces < bodies ? faces : bodies);

  // Subtract the count of idols made using option 3 from the counts of eyes, faces, and bodies
  eyes -= idols_option3;
  faces -= idols_option3;
  bodies -= idols_option3;

  // Calculate the maximum number of idols that can be made using option 1
  long long idols_option1 = eyes / 2 < bodies ? eyes / 2 : bodies;

  // Print the maximum number of idols that can be made
  printf("%lld\n", idols_option1 + idols_option3);

  return 0;
}
