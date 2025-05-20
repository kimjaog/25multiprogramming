#include<stdio.h>

int SUM(int a, int b)
{
	return a + b;
}

int SUB(int a, int b)

{
	return a - b;
}

int main()
{
	int a = 10, b = 5;
	printf("SUM of %d and %d is %d\n", a,b, SUM(a,b));
	printf("SUB of %d and %d is %d\n", a, b, SUB(a, b));
	return 0;
}