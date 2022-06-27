//4.Write a program in C to copy the elements of one array into another array.
#include <stdio.h>
int main()
{
	int a[5] = { 45, 76, 99, 24, 86},b[5];
	printf("After copying elements from array a to b: \n");
	for (int i = 0; i < 5; i++)
	{
		b[i] = a[i];
		printf("%d ", b[i]);
	}
	return 0;
}
