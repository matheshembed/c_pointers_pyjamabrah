//S2L3. Pointer Variable and Address | Understanding C - Pointers

#include<stdio.h>
void main()
{
    char c = 'A';

    char *c_ptr = &c;

    printf("\n C = %c  ,\n &C = %p ",c,c_ptr);
    
    printf("\n C_PTR = %p ",c_ptr);

    //Printing the address of the c_ptr itself
    // recall the c_ptr itself is a variable and it has its own address
    //so we are going to print the address of the pointer variable

    printf(" \n Address of the C_ptr = %p ",&c_ptr);

}