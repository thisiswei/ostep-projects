#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE (512)


void print_helper(const char *filename) {
}


int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        FILE *fp = fopen(argv[i], "r");
        if (fp == NULL) {
            printf("%s", "wcat: cannot open file\n");
            exit(1);
        }

        char buffer[BUFFER_SIZE];
        while (fgets(buffer, BUFFER_SIZE, fp) != NULL) {
            printf("%s", buffer);
        }

        fclose(fp);
    }
    return 0;
}
