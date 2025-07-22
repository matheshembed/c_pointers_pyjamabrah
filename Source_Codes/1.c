// S2L2. Declaring/Defining a Pointer | Understanding C - Pointers

#include<stdio.h>

void main()
{
    char c = 'A';

    char *c_ptr = &c;
    // the after the *(star) is a pointer
    // & is the address of the variable 

    // =  means assigning

    /*
     char ___________*c_ptr = &_________c  ; 
            the spaces here does not matter
    */

    printf("\n C = %c  ,\n &C = %p ",c,c_ptr);
    // %c denotes the character and %p is a pointer type
    printf("\n C_PTR = %p ",c_ptr);

}