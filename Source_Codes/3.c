//S2L4. * and & in relation to pointer variable | Understanding C - Pointers
#include<stdio.h>
void main()
{
    char c = 'A';
    char *c_ptr = &c;
    printf("\n C = %c  ,\n &C = %p ",c,c_ptr);
    printf("\n C_PTR = %p ",c_ptr);
    printf(" \n Address of the C_ptr = %p ",&c_ptr);

    // go to the address and fetch the data in the memory address
    printf(" \n contents of *c_ptr = %c",*c_ptr);

    //When using a star while defining or declaring the variable the variable becomes a pointer
    //when use a star with a variable name else where it means -- will go to the pointing location and get the contents of that.

}