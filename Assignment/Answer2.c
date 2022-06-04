#include <stdio.h>
int main()
{
    int number,i,sum=0,average;
    printf("Enter 10 numbers: \n");

    for(i=1;i<=10;i++){
      scanf("%d",&number);
      sum+=number;
    }
      average=sum/10;
      printf("Sum of the 10 numbers:%d\n",sum);
      printf("Average of the 10 numbers:%d\n",average);

      return 0;
}
