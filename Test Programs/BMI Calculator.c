#include<stdio.h>

int main() {
    float weight, height, bmi;
    int choice;

    // Display options for input units
    printf("BMI Calculator\n");
    printf("Choose your preferred unit system:\n");
    printf("1. Pounds and Inches\n");
    printf("2. Kilograms and Meters\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Input weight in pounds and height in inches
        printf("Enter your weight in pounds: ");
        scanf("%f", &weight);
        printf("Enter your height in inches: ");
        scanf("%f", &height);

        // Calculate BMI (BMI = (weight in pounds * 703) / (height in inches)^2)
        bmi = (weight * 703) / (height * height);
    } else if (choice == 2) {
        // Input weight in kilograms and height in meters
        printf("Enter your weight in kilograms: ");
        scanf("%f", &weight);
        printf("Enter your height in meters: ");
        scanf("%f", &height);

        // Calculate BMI (BMI = weight in kilograms / (height in meters)^2)
        bmi = weight / (height * height);
    } else {
        printf("Invalid choice. Please restart the program and choose 1 or 2.\n");
        return 1; // Exit the program with an error code
    }

    // Display the calculated BMI
    printf("Your BMI is: %.2f\n", bmi);

    // Display BMI categories
    printf("\nBMI Categories:\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal:      18.5 - 24.9\n");
    printf("Overweight:  25.0 - 29.9\n");
    printf("Obese:       30.0 or greater\n");

    // Determine and display the user's BMI category
    if (bmi < 18.5) {
        printf("You are in the Underweight category.\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("You are in the Normal category.\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("You are in the Overweight category.\n");
    } else {
        printf("You are in the Obese category.\n");
    }

    return 0;
}