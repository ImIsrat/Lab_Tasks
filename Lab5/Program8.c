#include <stdio.h>
int main()
{
   int arr[5],pos,num;
   printf("Enter 5 elements: ");
   for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    printf("Enter position and element to insert:  \n");
    scanf("%d %d",&pos,&num);

   for(int i=4;i>=pos;i--){
    arr[i+1]=arr[i];
   }
     arr[pos]=num;
     printf("After Insertion\n");

     for(int i=0;i<5;i++)
      printf("%d ",arr[i]);
}
