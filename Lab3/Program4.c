#include <stdio.h>
int main()
{  int i,j;
   float sum=1.0,factorial_sum=0;

   for(i=1;i<=7;i++){
    for(j=i;j>0;j--){
       sum*=j;
    }
     factorial_sum+=i/sum;
  }
    printf("The sum of first 7 terms is: %.2f",factorial_sum);
    return 0;
}
