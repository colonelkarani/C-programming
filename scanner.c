#include <stdio.h>


int my_first_function( int i , int j)
{
   return printf("%d plus %d is %d",i, j, i+j);
}

int main()
{
    my_first_function(5,7);
    printf("\n");
    my_first_function(20,90);
    return 0;
}