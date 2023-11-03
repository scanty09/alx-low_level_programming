#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: size of memory
* Return: pointer to new memory allocatd 
*/

void *malloc_checked(unsigned int b)
{
   char *output;

   output = malloc(b);
   if (output == NULL)
	   exist(98);
   else
	   return (output);
}
