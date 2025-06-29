#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Required for fork(), setsid(), close()
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>

void write_time_to_file(const char *filename) {
    FILE *fp = fopen(filename, "a");
    if (fp) {
        time_t now = time(NULL);
        struct tm *tm_info = localtime(&now);
        char buffer[64];
        strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", tm_info);
        fprintf(fp, "Current time: %s\n", buffer);
        fclose(fp);
    }
}

int main() {
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }
    if (pid > 0) {
        // Parent exits, child continues
        exit(0);
    }

    // Child process becomes session leader
    setsid();

    // Optional: change working directory and file permissions
    chdir("/");
    umask(0);

    // Close standard file descriptors
    close(STDIN_FILENO);
    close(STDOUT_FILENO);
    close(STDERR_FILENO);

    // Write time to file
    write_time_to_file("time.txt");
    sleep(5);
    write_time_to_file("time.txt");
    sleep(5);
    write_time_to_file("time.txt");

    return 0;
}