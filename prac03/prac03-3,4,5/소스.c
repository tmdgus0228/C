#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	//문제 3
	int num;
	printf("정수 하나를 입력하세요: ");
	scanf("%d", &num);
	printf("%d의 제곱은 %d입니다.\n", num, num * num);
	
	//문제 4
	int num1, num2;
	printf("두 정수를 입력하세요: ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("몫은 %d, 나머지는 %d입니다.\n", num1 / num2, num1 % num2);

	//문제 5
	int num3, num4, num5;
	printf("정수 세 개를 입력하세요: ");
	scanf("%d", &num3);
	scanf("%d", &num4);
	scanf("%d", &num5);
	printf("%d", (num1 - num2) * (num + num3) * (num3 % num1));
	return 0;
}

