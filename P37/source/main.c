#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int liner(const int array[], int key, int size);
int main(void)
{
	int a[SIZE], x, key, ele;

	for (x = 0; x < SIZE; x++)
		a[x] = 2 * x;

	printf("enter interger search key:\n");
	scanf_s("%d", &key);

	ele = liner(a, key, SIZE);

	if (ele != -1)
		printf("found value in element %d\n", ele);
	else
		printf("value not found");

	system("pause");
	return 0;
}

int liner(const int array[], int key, int size)
{
	int n;
	for (n = 0; n < size; n++)
	{
		if (array[n] == key)
			return n;
	}
	return -1;
}