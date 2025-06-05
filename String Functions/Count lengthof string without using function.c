#include <stdio.h>

int main()
{
    char s[200];               // Declare a character array 's' to hold the input string
    int count = 0;

    printf("Enter any string:\n");
    fgets(s, sizeof(s), stdin); // Safer alternative to gets()

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '\n')       // Remove newline if fgets reads it
            break;
        count++;
    }

    printf("Length of string is %d\n", count);
    return 0;
}
