#include <stdio.h>
#include <stdlib.h>

//This program displays the multiplication table vertically from 1 to 8 times

int main(void) 
{
 int i, j;

  

  for (i = 1; i <= 8; i++)
    {
      for (j = 1; j <= 12; j++)
        printf("%d x %d = %d\n", i, j, i * j);
    }

printf("\nEnd of program\n\n");
  //sleep (5);
  //system("clear");
  printf("Welcome user,");
  
  return 0;
}