#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 * main Entry point
 *
 * Return: always 0 (success)
 */

int main(void)

{
char c;

c = 'a';
while
( c <= 'z') {
if (( c != 'q' && c != 'e') && c <= 'z')
putchar(c);
c++;
		}
putchar('\n');
return(0);
}
				
