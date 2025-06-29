#include <stdio.h>

int main()
{
    char items[5][20] = {
        "apple",
        "banana",
        "cherry",
        "date",
        "elderberry"
    };
    char *ptr = items[0];
    for (int i = 0; i < 5; i++) {
        printf("%s\n", ptr + i * 20);
    }
    for (int i = 0; i < 5; i++) {
        items[i][0] = 'A' + i; 
    }
    for (int i = 0; i < 5; i++) {
        printf("%s\n", items[i]);
    }
    return 0;
}