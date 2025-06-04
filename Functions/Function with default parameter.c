#include <stdio.h>

void add(int y, int z)
{
    int x = y + z;
    printf("Add = %d\n", x);
}

int main()
{
    printf("Without parameter\n");
    add(10, 20);  // Manually pass default values
    printf("With Parameter\n");
    add(40, 60);
    return 0;
}
