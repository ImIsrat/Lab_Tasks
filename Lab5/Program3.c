#include<stdio.h>
int main()
{
    int a[]={5,25,11,50,24};
	int i,j,temp;
	for(i=0;i<5;i++){
     printf("%d\n",a[i]);
    }
     for(i=0;i<5;i++){
      for(j=i+1;j<5;j++){
       if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
       }
      }
     }
      printf("Maximum\n");

     for(i=0;i<1;i++){
      printf("%d",a[4]);
     }
      return 0;
}
