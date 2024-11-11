/*Write a C program that demonstrates redirection of standard output to a file.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = freopen("output.txt", "w", stdout);
    if (file == NULL) {
        perror("Failed to redirect stdout");
        return 1;
    }

    printf("This message will be written to output.txt instead of standard output.\n");

    fclose(file);
    return 0;
}

/*The text "This message will be written to output.txt instead of standard output." will be saved in the file output.txt.*/