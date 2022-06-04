#include <stdio.h>
int main()
{
    int number,i,sum=0;
    printf("Enter a natural number : ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
      sum+=i;
    }
      printf("Sum of all natural numbers till %d is:%d",number,sum);
      return 0;
}
