#include <stdio.h>

int main(void)
{
	int i, num;
	int divisor = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			divisor += 1;
	}
	if (divisor == 2)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");
}
