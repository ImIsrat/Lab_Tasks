#include<stdio.h>
int main()
{
	double man_population,women_population,total_literacy,man_literacy,illiterate_man,illiterate_women;

	double population=8000;
	man_population=population*0.52;
	women_population=population-man_population;
	total_literacy=population*0.48;
	man_literacy=population*0.35;
	illiterate_man=	man_population-man_literacy;
	illiterate_women=women_population-(total_literacy-man_literacy);
	printf("Illiterate man=%.2lf\nIlliterate women=%.2lf",illiterate_man,illiterate_women);

	return 0;

}
