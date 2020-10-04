/*
    C SOURCE CODE      
	Project Name: J'apprendre git
	Purpose of source code: developpement. 
	Teste d'utilisation de Git avec les editions diamond.
---------------------------------------------------------------------
COMPILER NEDEED
	HARDWARE TARGET: 
	DIALECT: 	-std={gnu89, gnu90, gnu99, gnu11,}

	-pedantic Pendantic option:

	-pedantic-error Pedantic error option 

	NON-STANDART LIBRARY -if used- : 

---------------------------------------------------------------------

SOURCE FILE NEDEED
	Non standart library -if use-:

PURPOSE:

FUNCTIONS USED:
	_printf();
	_main()
VARIABLES USED:

CONDICTIONS 

Note: .

TIPS:
	Source file Must end with a newline charactere.
////////////////////////////////////////////////////////////////////////


*/

/*INCLUDE*/
/*PROTOTYPES*/
/*MAIN*/

#include <stdio.h>
#include <math.h>
 
void sieve_of_erathosthenes(int limit, int temp_arr[])
{
      int c1, c2;
      for(c1 = 0; c1 < limit; c1++)
      {
            temp_arr[c1] = 1; 
      }
      temp_arr[0] = 0, temp_arr[1] = 0; 
      for(c1 = 2; c1 < sqrt(limit); c1++)
      {
            for(c2 = c1*c1; c2 < limit; c2 = c2 + c1)
            {
                  temp_arr[c2] = 0; 
            }
      }
}
 
int main()
{
      int limit, count;
      printf("\nEnter The Limit N To Print Prime Numbers:\t");
      scanf("%d", &limit);
      int temp_arr[limit];
      sieve_of_erathosthenes(limit, temp_arr);
      printf("\n");
      for(count = 0; count < limit; count++)
      {
            if(temp_arr[count] == 1)
            {
                  printf("%d\t", count);
            }
      }
      printf("\n");
      return 0;
}

/*-------------------------------------------------------------------*/
