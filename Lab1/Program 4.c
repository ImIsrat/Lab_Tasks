#include<stdio.h>
int main()
{
	float centigrade,farenheit;
	printf("Enter temperature in Fahrenheit: \n");
	scanf("%f",&farenheit);
	centigrade=(farenheit-32)*(5.0/9.0);
	printf("The temperature in centigrade is %.1f\n",centigrade);

	return 0;
}
