#include<stdio.h>
#include<string.h>
int main() {
    char u[200] = "kevinatandi@gmail.com", p[200] = "12345";
    char u1[200], p1[200];

    printf("Enter username: ");
    scanf("%199s", u1); // Limit input size to prevent buffer overflow

    printf("Enter password: ");
    scanf("%199s", p1); // Limit input size to prevent buffer overflow

    // Check username and password
    if (strcmp(u, u1) == 0 && strcmp(p, p1) == 0) {
        printf("Login successful\n");
    } else {
        printf("Wrong username or password\n");
    }

    return 0;
}
//end program
// This program implements a simple login system with improved input handling.