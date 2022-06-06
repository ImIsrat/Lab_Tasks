#include <stdio.h>
int main ()
{   int i = 1, j = 2;
    while (i <= 300){
        j = 2;
     while(j < i){
          if (i % j == 0)
            break;
          else
            printf ("%d\n", i);
            j++;
        }
        i++;
    }
    return 0;
}
