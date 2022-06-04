#include <stdio.h>
int main()
{
    int odd_number,i,sum=0;
    printf("Enter a natural number: ");
    scanf("%d",&odd_number);
    for(i=1;i<=odd_number;i+=2){
      sum+=i;
    }
      printf("Sum of all odd natural numbers till %d is:%d",odd_number,sum);
      return 0;
}
