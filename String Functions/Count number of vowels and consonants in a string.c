#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    int vowel = 0, consonant = 0;
    
    printf("Enter any string:\n");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowel++;
            else
                consonant++;
        }
    }

    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);

    return 0;
}
