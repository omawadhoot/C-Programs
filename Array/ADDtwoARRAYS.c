#include <stdio.h>
void main()
{
    int i, j;
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("\n Enter element for Array A ");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("\n Enter element for Array B ");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            scanf("%d", &b[i][j]);
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            c[i][j] = a[i][j] + b[i][j];
    printf("\n The addition is :");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            printf("%d", c[i][j]);
}