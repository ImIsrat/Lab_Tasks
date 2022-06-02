#include<stdio.h>
int main()
{  float base,height,hypotenuse,area,perimeter;

   printf("Enter 3 sides of the triangle:",base,height,hypotenuse);
   scanf("%f %f %f",&base,&height,&hypotenuse);

   area=(1/2)*base*height;
   perimeter=base+height+hypotenuse;

   if(area>perimeter){
    printf("Area is greater then perimeter!");
   }
    else{
     printf("Area is less than perimeter!");
    }
     return 0;
}
