#include<stdio.h>
int main()
{   char a;

	printf("Enter any single letter,digit or special symbol:");
	scanf("%c",&a);
    if(a>=65 && a<=90)
	{
	   printf("You have entered a capital letter");
	}
	else if(a>=97 && a<=122)
	{
	   printf("You have entered a small letter");
	}
	else if((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127) )
	{
	   printf("You have entered a special symbol");
	}
	   return 0;
}







