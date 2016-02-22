#include <stdio.h>

#define my_sizeof(value) (char *)(&value+1)-(char*)(&value)

int main()
{
	char c;
	float x;
	int y;
	double z;
	printf("%d", my_sizeof(c));
	printf("%d", my_sizeof(x));
	printf("%d", my_sizeof(y));
	printf("%d", my_sizeof(z));
	getchar();
	return 0;
}
