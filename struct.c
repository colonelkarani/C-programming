#include <stdio.h>
#include <string.h>

int main ()
{

    struct patient
    {
        char name[30];
        int age;
        int height;
        int weight;
    };

    struct patient patient1 =
    {
        "Douglas Mutiso", 89, 109, 69
    };

    strcpy(patient1.name ,"Dougie");
    patient1.age = 22;


    printf("Patient 1 name is %s", patient1.name);
    printf("Patient 1 age is %d ", patient1.age);
    
    

    return 0;
}