#include <stdio.h>

int main()
{
    char s[200];
    int length = 0;

    printf("Enter any string: ");
    fgets(s, sizeof(s), stdin); // safer than gets()

    // Calculate length (excluding newline if present)
    while (s[length] != '\0' && s[length] != '\n') {
        length++;
    }

    printf("Reverse of %s is given below\n", s);

    for (int j = length - 1; j >= 0; j--) {
        printf("%c", s[j]);
    }

    return 0;
}
