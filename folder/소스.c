#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;
	while (i < 50)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("1���� 50 ������ ��� 3�� ��� ��=%d", sum);
	return 0;
}