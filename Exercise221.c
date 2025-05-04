#include<stdio.h>

// Function to print a rectangle
void printRectangle() {
    printf("*********\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*********\n");
}

// Function to print a hollow square
void printHollowSquare() {
    printf(" ******\n*      *\n*      *\n*      *\n*      *\n*      *\n*      *\n*      *\n*      *\n ******\n");
}

// Function to print a triangle
void printTriangle() {
    printf("   *\n  *** \n *****  \n*******\n   *\n   *\n   *\n   *\n   *\n   *\n   *\n");
}

// Function to print a hollow diamond
void printHollowDiamond() {
    printf("     *     \n    * *  \n   *   *  \n  *     *\n *       *\n  *     *\n   *   *\n    * *  \n     *    \n");
}

// Function to print all shapes in one row
void printShapesInOneRow() {
    printf("*********   ******       *         *     \n");
    printf("*       *  *      *     ***       * *    \n");
    printf("*       *  *      *    *****     *   *   \n");
    printf("*       *  *      *   *******   *     *  \n");
    printf("*       *  *      *      *     *       * \n");
    printf("*       *  *      *      *      *     *  \n");
    printf("*       *  *      *      *       *   *   \n");
    printf("*********   ******       *        * *    \n");
    printf("                         *         *     \n");
}

int main() {
    // Call each function to print the shapes
    printRectangle();
    printHollowSquare();
    printTriangle();
    printHollowDiamond();
    // Print all shapes in one row
    printShapesInOneRow();
    return 0;
}
//end program
// This program prints various shapes using asterisks (*) and spaces. The shapes include a rectangle, a square, a diamond, a hollow diamond, and all shapes in one row.