#include <stdio.h>
#include <string.h>


int main()
{
    char name[89];
    printf("Enter you name please\n");
    fgets(name, sizeof(name), stdin);
    printf("Your name is %s", name);
    
  
    return 0;
}