#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    struct tm *local;

    // Get the current time
    time(&now);

    printf("%d\n", now);
    printf("Memory location of time is %p\n", &now);


    // Convert to local time
    local = localtime(&now);

    printf("%p", local);

    // Print date and time in YYYY-MM-DD HH:MM:SS format
    printf("Current date and time: %04d-%02d-%02d %02d:%02d:%02d\n",
           local->tm_year + 1900,
           local->tm_mon + 1,
           local->tm_mday,
           local->tm_hour,
           local->tm_min,
           local->tm_sec);

    return 0;
}