#include<stdio.h>
int main()
{  float angle1,angle2,angle3;
    int sum;
    printf("Enter 3 angles of the triangle: ",angle1,angle2,angle3);
    scanf("%f %f %f",&angle1,&angle2,&angle3);

    sum=angle1+angle2+angle3;
    if(sum==180){
         printf("The triangle is valid!");
    }
     else{
         printf("The triangle is invalid!");
     }
     return 0;
}
