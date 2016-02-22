#include <stdio.h>
#include <stdlib.h>
void main ()
{

char a[] = "hello";
char b[] = "hello\0";

if(strcmp(a,b))
   printf("string is same\n");
else
   printf("not same\n");

}
