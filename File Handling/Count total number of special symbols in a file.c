#include <stdio.h>

int main() {
    FILE *sfile;
    char ch;
    int special = 0;

    sfile = fopen("/temp/easy.txt", "r");
    if (sfile == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    while ((ch = getc(sfile)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Alphabet
        }
        else if (ch >= '0' && ch <= '9') {
            // Digit
        }
        else {
            special++; // Special symbol
        }
    }

    printf("Total number of special symbols = %d\n", special);
    fclose(sfile);
    return 0;
}
