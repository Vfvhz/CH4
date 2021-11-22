#include<stdio.h.>
#include<stdlib.h>
#define SIZE 5

void array(int b[], int size);
void ele(int e);

int main(void)
{
	int a[SIZE] = { 0, 1, 2, 3, 4 };
	int i;

	printf("effects of passing entire array by reference : \n\n"
		"the values of the original array are : \n");

	for (i = 0; i < SIZE; i++)
		printf("%3d", a[i]);
	printf("\n");

	array(a, SIZE);
	printf("the values of modified array are : \n");

	for (i = 0; i < SIZE; i++)
		printf("%3d", a[i]);

	printf("\n\n\neffects of passing array element"
		"by value\n\nthe value of a[3] is %d\n", a[3]);

	ele(a[3]);
	printf("the value of a[3] is %d\n", a[3]);

	system("pasue");
	return 0;
}

void array(int b[], int size)
{
	int i, j;
	for (j = 0; j < size; j++)
		b[j] *= 2;
}

void ele(int e)
{
	printf("value in modifyelement is %d\n", e *= 2);
}