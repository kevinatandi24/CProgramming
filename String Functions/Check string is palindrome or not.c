#include <stdio.h>
#include <string.h>

int main() {
    char s[200], rev[200];

    printf("Enter any string:\n");
    fgets(s, sizeof(s), stdin);

    // Remove the newline character if present
    size_t len = strlen(s);
    if (s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    strcpy(rev, s);
    strrev(rev);  // May not be available in all compilers

    if (strcmp(s, rev) == 0)
        printf("%s is a palindrome string\n", s);
    else
        printf("%s is not a palindrome\n", s);

    return 0;
}
