#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign char C
 * @size: size of array
 * @C: char to assign
 * Description: creat array of size and assign char C
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char C)
{
		
	char *str;
		
	unsigned int i;
		

		
	str = malloc(sizeof(char) * size);
		
	if (size == 0 || str == NULL)
		
		return (NULL);
		

		
	for (i = 0; i < size; i++)
		
		str[i] = c;
		
	return (str);
		
}

