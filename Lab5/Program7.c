#include <stdio.h>
int main()
{
   int arr[5],search;
   printf("Enter 5 numbers: ");

   for(int i=0;i<5;i++)
   scanf("%d",&arr[i]);
   printf("Enter A Number To Search: ");
   scanf("%d",&search);

   for(int i=0;i<5;i++){
    if(arr[i]==search)
    printf("Found at Position: %d\n",i+1);
  }
    return 0;
}
