//5.Write a program in c to count total duplicate number in a array.
#include <stdio.h>
int main()
{   int arr[10],c=0,i,j;
    for(i=0;i<10;i++){
      scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
      for(j=i+1;j<10;j++){
        if(arr[i]==arr[j]){
          c++;
          break;
        }
      }
    }
    printf("Total Duplicate Number: %d",c);
}
