#include <stdio.h>
int main()
{
    int number,i,sum=0;
    printf("Enter a natural number: ");
    scanf("%d",&number);
    for(i=0;i<=number;i+=2){
      sum+=i;
    }
    printf("Sum of even natural number till %d is: %d",number,sum);

    return 0;
}
