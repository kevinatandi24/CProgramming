#include <stdio.h>
#include <string.h>

void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    char u[] = "kevin@gmail.com", p[] = "Kevin@123";
    char u1[200], p1[200];

    printf("Enter username:\n");
    fgets(u1, sizeof(u1), stdin);
    remove_newline(u1);

    printf("Enter password:\n");
    fgets(p1, sizeof(p1), stdin);
    remove_newline(p1);

    if (strcmp(u, u1) == 0 && strcmp(p, p1) == 0)
        printf("Login successfully\n");
    else
        printf("Wrong username or password\n");

    return 0;
}
