#include <stdio.h>
#include <stdlib.h>

int fun(){
  static int i;
  return i++;
    }
void main ()
{
  int i;
  for(i=0;i<5;i++)    
  printf("Value of i is %d\n", fun());
}
