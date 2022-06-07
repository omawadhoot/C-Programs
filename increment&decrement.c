// Pre Increment and Post Increment //
#include <stdio.h>
#include <conio.h>
void main()
{
    // Pre Increment //
    // first increment and then use //
    int n = 2 , i = 5 ;
    printf("%d\n", ++n); // here , 2 incremented to 3 and then printed //

    // Post Increment //
    // First use and then increment //
    printf("%d\n", n++); // here , 3 is the current value of n which is used first and then it's incremented //
    // Here , the incremented value is still in compiler and not yet used //

    printf("%d\n", n);// Here the incremented value is used //

    
    // Pre Decrement 
    // First Decrement and then use // 

    printf("%d\n",--i); // Here , 5 is decremented to 4 and then used // 

    // Post Decrement 
    // First use and then decrement // 

    printf("%d\n",i--); // Here , 4 is current value of i which is used and then decremented , so the decremented value stored in compiler is not yet used // 
    printf("%d\n",i); // Here the decremented value will be used // 


}
