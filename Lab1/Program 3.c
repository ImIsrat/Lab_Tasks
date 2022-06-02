#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,sum,percentage;
	printf("Enter the marks of 5 subjects: \n");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	sum=sub1+sub2+sub3+sub4+sub5;
	percentage=(sum/500.00)*100.00;
	printf("Total mark is %.1f\n",sum);
	printf("Percentage is %.2f%",percentage);
	return 0;
}
