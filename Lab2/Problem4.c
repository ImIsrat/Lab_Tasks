#include <stdio.h>
int main(){
    int num,reverse_num=0,remainder;
    printf("Enter the number to reverse: ");
    scanf("%d",&num);

    while(num != 0){
     remainder = num % 10;
     reverse_num = reverse_num * 10 + remainder;
     num = num/10;
    }
     printf("The reversed number is: %d\n", reverse_num);
     if(reverse_num==num){
    	printf("Numbers are equal");
    }
	else{
		 printf("Numbers are not equal");
    }
      return 0;
}
