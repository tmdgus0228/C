#include <stdio.h>
#include <math.h>

double StandardDeviation(double arr[5])
{
	double sum = 0;
	double powSum = 0;
	double total;
	double ave;
	int i;
	
	for (i = 0;i < 5;i++)
	{
		sum += arr[i];
	}

	ave = sum / 5;
	
	for (i = 0;i < 5;i++)
	{
		powSum += pow((arr[i] - ave), 2);
	}
	total = powSum / 5;

	return sqrt(total);
}

int main()
{
	double arr[5] = { 0, 0, 0, 0, 0 };
	int i;

	printf("Enter 5 real numbers: ");
	
	for (i = 0;i < 5; i++)
	{
		scanf("%lf", &arr[i]);
	}

	printf("Standard Deviation = %f", StandardDeviation(arr));
}