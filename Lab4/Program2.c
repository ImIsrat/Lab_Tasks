#include <stdio.h>
int main()
{
    char ch;
    int a,b;
    printf("Enter the operator: ");
    scanf("%c",&ch);

    switch(ch){
      case '+':
        printf("Enter the 2 numbers: ");
        scanf("%d%d",&a,&b);
        printf("The Addition is: %d",a+b);
        break;

      case '-':
        printf("Enter the 2 numbers: ");
        scanf("%d%d",&a,&b);
        printf("The Substraction is: %d",a-b);
        break;

      case '/':
        printf("Enter the 2 numbers: ");
        scanf("%d%d",&a,&b);
        printf("The Division is: %d",a/b);
        break;

      case '*':
        printf("Enter the 2 numbers: ");
        scanf("%d%d",&a,&b);
        printf("The Multiplication is: %d",a*b);
        break;
      }
        return 0;
}
