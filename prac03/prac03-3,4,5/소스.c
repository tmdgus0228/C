#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	//���� 3
	int num;
	printf("���� �ϳ��� �Է��ϼ���: ");
	scanf("%d", &num);
	printf("%d�� ������ %d�Դϴ�.\n", num, num * num);
	
	//���� 4
	int num1, num2;
	printf("�� ������ �Է��ϼ���: ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("���� %d, �������� %d�Դϴ�.\n", num1 / num2, num1 % num2);

	//���� 5
	int num3, num4, num5;
	printf("���� �� ���� �Է��ϼ���: ");
	scanf("%d", &num3);
	scanf("%d", &num4);
	scanf("%d", &num5);
	printf("%d", (num1 - num2) * (num + num3) * (num3 % num1));
	return 0;
}

