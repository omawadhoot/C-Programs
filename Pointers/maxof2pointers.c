#include <stdio.h>
#include <conio.h>
void main()
{

    int first, second, *p, *q, max;
    printf("Enter the value of first integer : ");
    scanf("%d", &first);
    printf("Enter the value of second integer : ");
    scanf("%d", &second);
    p = &first;
    q = &second;
    if (*p > *q)
    {
        printf("%d is greater", *p);
    }
    else
    {

        printf("%d is greater ", *q);
    }
}