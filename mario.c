// This program prompt the user to enter a value as input. If the value respects the condition, the program returns a pyramid.
#include <stdio.h>

int main(void)
{
  int n;
  do
  {
    // Prompt the user to enter a number between 1 to 8 inclusive
    printf("Height: ");
    scanf("%i", &n);
      
  // While the condition is not  met, we start the loop again
  }while(n > 8 || n < 1);

  // The first for loop return the # in height
  for(int i = 0; i < n; i++)
  {

    // The second loop return the blank case, it doesn't appear
    for(int j = n - 1; j > i; j--)
    {
      printf(" ");
    }

    // The third loop return the # in width
    for(int k = 0; k <= i; k++)
    {
      printf("#");
    }

    // Then return a new line
    printf("\n");
  }
}