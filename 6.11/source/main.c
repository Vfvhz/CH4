#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void main()
{
	int b,d,i,j;
	bool f = true;
	int c = 0;
	int a[10] = {0};
	for ( i = 0; i < 10; i++)
	{
		printf("�п�J��%d�Ӥ���(�@10��):", i + 1);
		scanf_s("%d", &d);
		a[i] = d;
	}
	printf("\n�H�U���}�C��������:");
	for ( i = 0; i <10; i++)
	{
		printf("%d	", a[i]);
	}
	printf("\n�}�l�Ƨ�");
	i = 0;
	while (i < 10 && f == true)
	{
		f = false;
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
				f = true;
			}
		}
		i++;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d	", a[i]);
	}
}