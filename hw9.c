#include <stdio.h>

typedef struct city
{
	char name[30];
	char country[30];
	char population[30];
} City;

int main()
{
	City arr[3];

	printf("Input three cities: \n");
	for (int i = 0; i < 3; i++)
	{	
		printf("Name> "); 
		scanf("%s", arr[i].name);
		printf("Country> "); 
		scanf("%s", arr[i].country);
		printf("Population> "); 
		scanf("%s", arr[i].population);
	}

	printf("Printing the three cities:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %s people \n",
		i + 1, arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}