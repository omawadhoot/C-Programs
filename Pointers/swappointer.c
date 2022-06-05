// This is a program of swapping numbers with the help of pointers //
#include<stdio.h>
#include<conio.h>
// Creating a function named Swap for swapping the values of two variables // 

void swap (int*a , int*b ) // The Syntax of declaring pointers is data_type*pt variable (pt variable - pointer variable ) // 
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

void main ()
{
int x,y,sum;
printf("\n Enter the value of x : ");
scanf("%d",&x);
printf("\n Enter the value of y : ");
scanf("%d",&y);
// Using the swap function now to swap the values of x and y // 
swap (&x , &y );
printf("\n x = %d",x);
printf("\n y = %d",y);
//  Sum is the addition of the swapped numbers //
sum = x + y;
printf("\n The sum of x+y = %d\n",sum);
}