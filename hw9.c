#include <stdio.h>
#include <string.h>
#define MAX_STRING_SIZE 30

typedef struct city
{
	char name[MAX_STRING_SIZE];
	char country[MAX_STRING_SIZE];
	int population;
} City;

int main()
{
	City city_list[3] = { 0 };
	int i;

	printf("Input three cities: \n");
	for (i = 0;i < 3;i++)
	{
		printf("Name> ");
		fgets(city_list[i].name, MAX_STRING_SIZE, stdin);

		printf("Country> ");
		fgets(city_list[i].country, MAX_STRING_SIZE, stdin);

		printf("Population> ");
		scanf("%d", &(city_list[i].population));

		while (getchar() != '\n');  // \n 없애기
	}
	printf("\n");

	printf("Printing the three cities:\n");
	for (i = 0;i < 3;i++)
	{
		city_list[i].name[strlen(city_list[i].name) - 1] = 0;        // \n 없애기
		city_list[i].country[strlen(city_list[i].country) - 1] = 0;  // \n 없애기
		printf("%d. %s in %s with a population of %d people \n",
			i+1, city_list[i].name, city_list[i].country, city_list[i].population);
	}
	return 0;
}
