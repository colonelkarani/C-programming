#include <stdio.h>

int main()
{
    int ages[] = {23,532,542,656,775,76,23,623,32};

    int*arr_ptr = &ages[0];

    int length = sizeof (ages)/ sizeof(ages[0]);
    for (int i = 0; i < length; i++)
    {
        printf("the age at index %d is %d\n" , i, *arr_ptr);
        arr_ptr++;
    }
    
    return 0;
}