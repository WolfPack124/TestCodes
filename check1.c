#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char *name;
    name = (char *)malloc(20);
    strcpy(name, "India");
    printf("My counter is %s\n", name+1);
    free (name);
}
