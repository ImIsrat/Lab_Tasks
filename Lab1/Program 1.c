#include <stdio.h>
int main()
{
   double basic_salary,gross_salary;
   printf("Enter basic salary: \n");
   scanf("%lf",&basic_salary);
   gross_salary=basic_salary-(basic_salary*0.4)-(basic_salary*0.2);
   printf("Gross salary is %.2lf",gross_salary);
}
