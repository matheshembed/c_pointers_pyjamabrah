// S3L1. Use of * and & | Understanding C - Pointers
#include<stdio.h>
void main()
{
    int i=0xAA;
    char c=3;

    int x;
    char *c_ptr;

    printf("\n");
    printf("&C = %p \n",&c);
    //the unassigned variables posses random number which is said to be garbage value
    printf("(garbage) X = %d \n ",x);
    printf("(garbage) c_ptr = %p \n ",c_ptr);
    // Some times the compiler will reject the null pointer and prints zero that is why it is printed with another method
    printf("(garbage) c_ptr =0x%llx \n",(long long unsigned int)c_ptr);

    /*1. Use of & before the variable in non-pointer assignment*/
    // x = i & c ;//logical and operation
    // printf("\n X = I & C --> %d \n",x);

    /*2. Use of & before the variable in non-pointer assignment*/
    // This part gives error which is intentional
    // We cannot do AND Opertion and INT With Pointer
    // c_ptr = &c;
    // x= i & c_ptr;
    // printf("X= i&c_ptr -->%d\n ",x);
    //  Also We cannot do AND Operation and INT With Char
    // x=i & &c;
    // printf(" X= i & &c -->%d\n");

    // i=0xff;//it is an int so its storage memory is 32bit
    // x=i & (int)(&c);//or also i & (int)(&c) Typecasting
    // printf("x=i & (int)&c --> %x \n ",x);//%x is the hexadecimal representation identifier


    /*3. Assign Pointer a valid address*/
    // c_ptr=&c;
    // printf("\n C_ptr=%p \n",c_ptr);

    /*4.The use of 8 with a pointer variable */
    // i=2;
    // x=i*c_ptr;
    // printf("\n x=i*c_ptr --> %d \n",x);

    /*5.The use of * with a pointer variable*/
    c_ptr=&c;
    printf("\n cptr=%p, &c=%p \n ",c_ptr,&c);
    i=2;
    x=i * *c_ptr;// Dereferencing means using the pointer variable with * will fetch the data at that address where the pointer is pointing .
    printf("x=i**cptr --> %d \n ",x);
    
    /*6.The use of * with a pointer variable */
    //the above 5th segment code and this code is same
    x=i * (*c_ptr);
    printf("x=i**cptr --> %d \n ",x);


    
    

}














