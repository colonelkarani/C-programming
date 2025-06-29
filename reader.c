#include <stdio.h>

void file_reader(char file[])
{
    FILE *fptr;

    

    fptr =fopen(file, "r");
    
    if (fptr ==NULL)
    {
        printf("The file does not exist");
    }
    char data[100];
    fgets(data, 100, fptr);
    while (fgets(data, 100, fptr))
    {
        printf("%s", data);           
    }
    
}

int main()
{

    char file_name[30];
    printf("Enter the name of the file that you want to read\n");
    scanf("%s", file_name);

    file_reader(file_name);   

    return 0;
}