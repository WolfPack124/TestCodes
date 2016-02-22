#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int array[10];
    int i;
    for (i = 0; i < 10; i++)
        array[i] = 1 ;

    printf("\nThe array is ");
    for (i = 0; i < 10 ; i++)
    {
        printf("%d , ", array[i]);
    }

    printf("\nClear the list of array\n");
    memset(array, 0, sizeof(int)*10);
    printf("\nThe array is ");
    for (i = 0; i < 10 ; i++)
    {
        printf("%d , ", array[i]);
    }

    printf("\nSet the list of array\n");
    memset(array, 1, sizeof(int)*10);
    printf("\nThe array is ");
    for (i = 0; i < 10 ; i++)
    {
        printf("%d , ", array[i]);
    }

    printf("\nClear the list of array\n");
    memset(array, 0, sizeof(int)*10);
    printf("\nThe array is ");
    for (i = 0; i < 10 ; i++)
    {
        printf("%d , ", array[i]);
    }

    printf("\n");
}
