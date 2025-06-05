#include <stdio.h>

int main()
{
    char s[200];
    int special = 0;

    printf("Enter any string\n");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            // Uppercase or lowercase letter: do nothing
        }
        else if (s[i] >= 48 && s[i] <= 57)
        {
            // Digit: do nothing
        }
        else if (s[i] != '\n')  // To ignore the newline character read by fgets
        {
            special++;
        }
    }

    printf("Total special symbols = %d\n", special);

    return 0;
}
