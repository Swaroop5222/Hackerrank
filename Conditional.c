#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
  	// Complete the code.
      int n;
      scanf("%d",&n);
      if(n>9 && n%2==0)
      printf("even\n");
      else if(n>9 && n%2!=0)
      printf("odd\n");

    return 0;
}

