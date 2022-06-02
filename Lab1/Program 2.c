#include<stdio.h>
int main()
{
	float kilometer,meter,feet,inches,centimeter;
	printf("Enter the distance between Mirpur & Ashulia: \n");
	scanf("%f",&kilometer);
	meter = 1000*kilometer;
	printf("Mirpur to Ashulia is:%.2f meters \n",meter);
	feet=3280.8399*kilometer;
	printf("Mirpur to Ashulia is:%.2f feet\n",feet);
	inches=39370.078*kilometer;
	printf("Mirpur to Ashulia is:%.2f inches\n",inches);
	centimeter= 100000*kilometer;
	printf("Distance in centimeter from Mirpur to Ashulia:%.2f centimeters\n",centimeter);
	return 0;
}
