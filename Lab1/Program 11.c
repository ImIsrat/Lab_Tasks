#include<stdio.h>
int main()
{
	int amount,ten,fifty,hundred;

	printf("Enter the amount to be withdrawn:");
	scanf("%d",&amount);

	ten=amount/10;
	fifty=amount/50;
	hundred=amount/100;
    printf("The cashier will give:\n %d notes of 10.\n %d notes of 50.\n %d notes of 100.",ten,fifty,hundred);

    return 0;
}
