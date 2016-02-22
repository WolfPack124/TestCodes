#include <stdio.h>

void main()
{
    int a, sum;
    printf("Enter the number to find the sum of digits : ");
    scanf("%d", &a);
    for(sum = 0 ; a > 0; sum+=a%10, a/= 10);
    printf("Sum is %d \n", sum);
}
