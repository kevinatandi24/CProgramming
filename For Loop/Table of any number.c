#include<stdio.h>
int main(){
    int no;
    printf("Enter a number: "); // Prompt user for input
    scanf("%d", &no); // Read the number from user input
    for(int i = 1; i <= 10; i++){ // Loop from 1 to 10
        printf("%d ", i * no); // Print the multiplication table
    }
}