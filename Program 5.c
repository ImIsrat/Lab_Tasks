#include<stdio.h>
#define pi 3.1416
int main()
{
	float length,breadth,radius,perimeter,circumference,rectangle_area,circle_area;
	printf("Enter the length & breadth: \n");
	scanf("%f%f",&length,&breadth);
	printf("Enter the radius: \n");
	scanf("%f",&radius);
	rectangle_area = length*breadth;
    printf("Area of the rectangle is %.2f\n",rectangle_area);
    perimeter = 2*(length+breadth);
	printf("Perimeter of the rectangle is %.2f\n",perimeter);
	circle_area = pi*radius*radius;
	printf("Area of the circle is %.2f\n",circle_area);
	circumference = 2*pi*radius;
	printf("Circumference of the circle is %.2f",circumference);
	return 0;
}
