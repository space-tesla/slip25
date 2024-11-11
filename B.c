/*Write a C program that redirects standard output to a file output.txt using the dup and open system calls.*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int file = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (file < 0) {
        perror("Failed to open file");
        return 1;
    }

    dup2(file, STDOUT_FILENO);
    close(file);

    printf("This message will be written to output.txt instead of standard output.\n");

    return 0;
}


/*The text "This message will be written to output.txt instead of standard output." will be saved in the file output.txt.*/