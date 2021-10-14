#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	//문제 1
	int num;
	printf("정수를 입력하세요:");
	scanf("%d", &num);
	printf("%d\n", ~num+1);

	//문제 2: 
	/* 
	<< 왼쪽으로 한 칸 이동할 때 마다 2배 증가, 두 칸 : 4배, 세 칸 : 8배
	>>오른쪽으로 한 칸 이동할 때 마다 1/2배 증가, 두 칸: 1/4배
	a * 8 / 4 : 8배 하고 1/4배 해라 -> 왼쪽으로 세 칸, 오른쪽으로 2칸 
	*/
	int a = 3;
	a = a << 3;
	a = a >> 2; 
	printf("%d", a);
}