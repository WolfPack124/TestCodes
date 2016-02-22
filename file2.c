#include <stdio.h>
#include "file1.h"
extern int a;

int main()
{
 display();
 a = 4520;
 printf("Printing from main\n a = %d \n", a);
 display();

 return 0;
}
