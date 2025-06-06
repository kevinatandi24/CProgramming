#include <stdio.h>

struct ArrayToStruct {
    int x;
};

int main()
{
    struct ArrayToStruct obj_array[5];
    printf("Enter 5 integer values one by one:\n");

    for (int i = 0; i < 5; i++)
        scanf("%d", &obj_array[i].x);

    printf("Elements are given below:\n");

    for (int j = 0; j < 5; j++)
        printf("%d ", obj_array[j].x);

    printf("\n");
    return 0;
}
