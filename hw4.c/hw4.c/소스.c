#include <stdio.h>

int Binary(int n)
{
	if (n / 2 > 0)
		Binary(n / 2);
	printf("%d", n % 2);
}

int main()
{
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	Binary(n);
}