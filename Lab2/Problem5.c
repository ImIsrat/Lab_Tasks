#include<stdio.h>
int main()
{
	int Arif_age,Fahmid_age,Joy_age;

	printf("Enter the ages of Arif,Fahmid and Joy:");
	scanf("%d %d %d",&Arif_age,&Fahmid_age,&Joy_age);

	if(Arif_age<Fahmid_age && Arif_age<Joy_age)
	{
     printf("Arif is the youngest");
	}
	else if(Joy_age<Fahmid_age && Joy_age<Arif_age)
	{
     printf("Joy is the youngest");
	}
	else{
		printf("Fahmid is the youngest");
	}



	return 0;


}
