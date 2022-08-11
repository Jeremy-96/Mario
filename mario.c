// This program prompt the user to enter a value as input. If the value respects the condition, the program returns a pyramid.
#include <stdio.h>

int main(void)
{
  int n;

  do
  {
    // Prompt the user to enter a number
    printf("Height: ");
    scanf("%d, %c, %s", &n);

    // If the number is more than 8 or less than 1, print an error message and re-prompt the user to input a new value
    if(n > 8 || n < 1) {
      printf("Please enter a number between 0 and 9 \n");
    // Else enter in the for loop
    }else {
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

  // While the condition is not  met, we start the loop again
  }while(n > 8 || n < 1);
}