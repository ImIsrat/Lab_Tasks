#include <stdio.h>
int main()
{   int columns,rows;

    for(int column=1;column<=5;column++){
      for(int rows=column;rows>0;rows--){
        printf("%d ",rows);
      }
      printf("\n");
    } return 0;
}
