/* S4L3. Pointer Arithmetic | Understanding C - Pointers*/
    /* We cannot do multiplication and divison with pointers*/
    /* We can only do additon and subtraction*/
    /* We cannot increment the value but when incrementing it actually increments (1*size of the datatype) and when it happens the pointing address will also change accordingly*/
                                                                                // increment_num * size of the datatype
    /* Key Concepts of Pointer Arithmetic

    Operations on Pointers: 
            You can only perform addition and subtraction on pointer variables.
            Multiplication and division are not allowed on pointers.
    Pointer Arithmetic:
            When adding or subtracting from a pointer, the increment or decrement is based on the size of the data type the pointer points to, not just by one byte.
            For example, if an integer pointer is incremented by one, it moves forward by the size of an integer (typically 4 bytes).
    Examples:
            For an integer pointer (e.g., PA):
                    PA + 1 moves the pointer by 4 bytes (size of int).
            For a character pointer (e.g., PB):
                    PB + 1 moves the pointer by 1 byte (size of char).
            For a struct pointer, the increment is by the total size of the struct.
    Dereferencing:  
            Dereferencing a pointer allows access to the value at the pointed address.
            Pointer arithmetic can be used in dereferencing, e.g., *PA + 1 is equivalent to accessing the next element in an array.
    Memory Safety:
            Accessing memory outside the allocated range can lead to garbage values or segmentation faults.
    Compiler Behavior:
            Attempting to multiply or divide pointers results in a compilation error.
Conclusion: Understanding pointer arithmetic is crucial for effective memory management in programming. Always remember that pointer increments depend on the data type size, and avoid illegal operations like multiplication or division on pointers. */
        

#include<stdio.h>
void main(){
        char a[3]={'A','B','C'};
        int b[3]={10,11,12};
        short int c[3]={20,21,22};

        char *pa=a;
        int *pb=&b[0];

        printf("\nMath on char Pointer:\n");
        printf("pa = %p\n",pa);
        printf("pa+0 = %p : *(pa+0) = %c , pa[0] = %c\n", pa+0, *(pa+0), pa[0]);
        printf("pa+1 = %p : *(pa+1) = %c , pa[1] = %c\n", pa+1, *(pa+1), pa[1]);
        printf("pa+2 = %p : *(pa+2) = %c , pa[2] = %c\n", pa+2, *(pa+2), pa[2]);

        printf("\nmath on int pointer:\n");
        printf("pb = %p\n",pb);
        printf("pb+0 = %p : *(pb+0) = %d , pb[0] = %d\n", pb+0, *(pb+0), pb[0]);
        printf("pb+1 = %p : *(pb+1) = %d , pb[1] = %d\n", pb+1, *(pb+1), pb[1]);
        printf("pb+2 = %p : *(pb+2) = %d , pb[2] = %d\n", pb+2, *(pb+2), pb[2]);

        printf("\nMath on short in poinnter:\n");
        short int *pc =&c[1];
        printf("pc = %p\n",pc);
        printf("pc+0 = %p : *(pc+0) = %d , pc[0] = %d\n", pc+0, *(pc+0), pc[0]);
        printf("pc-1 = %p : *(pc-1) = %d , pc[-1] = %d\n", pc-1, *(pc-1), pc[-1]);
        printf("pc+1 = %p : *(pc+1) = %d , pc[1] = %d\n", pc+1, *(pc+1), pc[1]);

        

         


}