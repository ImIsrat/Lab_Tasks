#include<stdio.h>
int main()
{
   int a=0,b=1,c,i,number;
   printf("Enter a Number To Show Fibonacci Series: ");
   scanf("%d",&number);
   printf("%d %d",a,b);
  //Loop starts from 2 as 0 and 1 are already printed

   for(i=2;i<number;i++){
    c = a + b;
    printf(" %d",c);
    a = b;
    b = c;
   }
    return 0;
}
