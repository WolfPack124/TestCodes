#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i = 1;
	char *ch;
	ch = (char *)&i;
	if (*ch) 
	    printf("Little Endian\n");
	else
	    printf("Big Endian\n");
	
}
