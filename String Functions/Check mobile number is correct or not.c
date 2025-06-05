#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char mn[200];
    int valid = 1;

    printf("Enter mobile number: ");
    fgets(mn, sizeof(mn), stdin);

    // Remove newline if present
    size_t len = strlen(mn);
    if (mn[len - 1] == '\n') {
        mn[len - 1] = '\0';
        len--;
    }

    // Check length
    if (len != 10) {
        valid = 0;
    } else {
        // Check if all characters are digits
        for (int i = 0; i < 10; i++) {
            if (!isdigit(mn[i])) {
                valid = 0;
                break;
            }
        }
    }

    if (valid)
        printf("Number is correct\n");
    else
        printf("Incorrect number\n");

    return 0;
}
