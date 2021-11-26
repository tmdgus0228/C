#include <stdio.h>
#include <string.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';  // 아스키 코드값의 차

	if (ch >= 'A' && ch <= 'Z')  // ch가 A~Z이면(대문자 이면)
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')  // ch가 a~z이면(소문자 이면)
		return ch - diff;
	else
		return ch;
}

int main()
{
	char str[50];
	int len = 0;

	printf("Input> ");
	fgets(str, sizeof(str), stdin);  // 문자열 입력
	str[strlen(str) - 1] = 0;  // \n 문자의 삭제
	len = strlen(str);

	printf("Output> ");
	for (int i = 0; i < len; i++)
	{
		str[i] = convCase(str[i]);
		putchar(str[i]);
	}
}