#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string as a parameter.
 * @str: string to be copied
 * Return: On success, the _strdup function returns a pointer to the
 * duplicated string.
 * However, Returns NULL if str = NULL.
 */
char *strdup(char *str)
{
int size, i;
char *ptr;

if (str == NULL)
return (NULL);

/*Determining entered lenght size*/

for (size = 0; str[size] != '\0')
size++;

ptr = (char *) malloc((size + 1) * sizeof(char));

if (ptr == NULL)
return (NULL);

/*Copying content of @str into new array*/
for (i = 0; str[i] != '\0'; i++)
ptr[i] = str[i];
ptr[1] = '\0';

return (ptr);
}
