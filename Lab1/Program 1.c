#include<stdio.h>
int main()
{
  int a,b,c,d,e,sum;
  double percentage;
  printf("Enter 5 subject marks:");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  sum=a+b+c+d+e;
  percentage=(sum/500.00)*100.00;

  printf("Sum=%d\n",sum);
  printf("Percentage=%.2lf",percentage);

  return 0;

}

 
