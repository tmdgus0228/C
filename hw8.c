#include <stdio.h>
#include <string.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';  // �ƽ�Ű �ڵ尪�� ��

	if (ch >= 'A' && ch <= 'Z')  // ch�� A~Z�̸�(�빮�� �̸�)
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')  // ch�� a~z�̸�(�ҹ��� �̸�)
		return ch - diff;
	else
		return ch;
}

int main()
{
	char str[50];
	int len = 0;

	printf("Input> ");
	fgets(str, sizeof(str), stdin);  // ���ڿ� �Է�
	str[strlen(str) - 1] = 0;  // \n ������ ����
	len = strlen(str);

	printf("Output> ");
	for (int i = 0; i < len; i++)
	{
		str[i] = convCase(str[i]);
		putchar(str[i]);
	}
}