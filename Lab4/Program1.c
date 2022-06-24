#include<stdio.h>
#include<math.h>
int main()
{

	int choice,i,fact=1,number,flag=0;

    printf("Choices are below:\n");
    printf("1:Factorial\t");
    printf("2:Prime\t");
    printf("3:Odd/Even\t");
    printf("4:Exit\n");
	printf("Enter choice ");
	scanf("%d",&choice);

	switch(choice)
	  {
        case 1:
        printf("Enter a number: ");
        scanf("%d",&number);
        for(i=1;i<=number;i++){
        fact=fact*i;
      } printf("Factorial of %d is: %d",number,fact);

		break;

		case 2:
        printf("Enter any positive number:");
        scanf("%d",&number);
        for(i=2;i<number;i++){
         if(number%i==0){
		 flag=1;

		 break;
        }
      }  if(flag==0){
          printf("Prime Number");
        } else{
          printf("Not Prime Number");
        }
          break;

	      case 3:
	      printf("Enter a number: ");
          scanf("%d",&number);
          if(number%2==0){
           printf("even number");
          }else{
            printf("odd number");
	      }
          break;

	      default:
           printf("No case");

          return 0;
         }
}
