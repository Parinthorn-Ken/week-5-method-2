#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int factorial(int z);
int main() {
	int x, y;
	printf("enter positive number: ");
	scanf("%d", &x);
	factorial(x);
	y = factorial(x);
	printf("factorial of %d is %d", x, y);
	return 0;
}
int factorial(int z)
{
	if (z == 0) {
		return 1;
	}
	else return z * factorial(z - 1);

}