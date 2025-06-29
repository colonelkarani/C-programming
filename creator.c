#include <stdio.h>

void create_file()
{
    FILE *fp;
    fp = fopen("cfile.md", "a");

    for (int i = 0; i < 20; i++)
    {
    fprintf(fp, " ## Hello %d time\n", i);
    }
    

    fclose(fp);
}

int main()
{

    create_file();
    return 0;
}