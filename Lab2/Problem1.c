#include<stdio.h>
int main()
{
	double cost_price,selling_price,profit,loss;

	printf("Enter the cost and selling price of an item: ");
	scanf("%lf%lf",&cost_price,&selling_price);

	if(cost_price>selling_price)
	{
		loss=cost_price-selling_price;
		printf("Loss of %.2lf",loss);
    }
	else
	{
        profit=selling_price-cost_price;
		printf("Profit of %.2lf",profit);
    }
      return 0;
}
