#include<stdio.h>
int main() {
   int x1,y1,x2,y2,x3,y3,gradient_1,gradient_2;

   printf("Enter the values of 3 coordinates: \n");
   printf("(x1,y1):");
   scanf("%d %d",&x1,&y1);
   printf("(x2,y2):");
   scanf("%d %d",&x2,&y2);
   printf("(x3,y3):");
   scanf("%d %d",&x3,&y3);

   gradient_1=(x2-x1)/(y2-y1);
   gradient_2=(x3-x2)/(y3-y2);

   if(gradient_1==gradient_2){
     printf("All the coordinates fall on one straight line.\n");
    }
    else{
     printf("These three points do not fall on one straight line.");

}


return 0;

}
