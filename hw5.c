#include <stdio.h>

int main()
{
	int arr[5];
	int i;

	printf("5���� ������ �Է��ϼ���: ");

	for (i = 0; i < 5;i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Ȧ�� ���: ");
	for (i = 0;i < 5;i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}

	printf("\n¦�� ���: ");
	for (i = 0;i < 5;i++)
	{
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}
}