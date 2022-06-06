#include<stdio.h>
int main()
{
    int i,hour_worked,extra_hrs;
    for(i=1;i<=10;i++)
  {
      printf("\n");
      printf("Enter working hour of the employee : ",hour_worked);
	  scanf("%d",&hour_worked);

	  if(hour_worked>40){
      extra_hrs=(hour_worked-40)*12;
      printf("%d Rs. is the overtime pay of the employee.\n",extra_hrs);
	 }
	else
     printf("This employee did not work overtime!\n");
  }
     return 0;
}
