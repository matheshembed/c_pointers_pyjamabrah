/*S4L1. Pointing to data with a Datatype | Understanding C - Pointers */
/*
    Understanding Pointers and Data Types


    Definition of Pointers: Pointers are variables that store the address of another variable, allowing access to the data at that address.
    Memory Representation: Memory is visualized as an array of bytes. Each variable occupies a specific memory location.
    Dereferencing: The dereference operation (using *) retrieves the value stored at the memory address the pointer points to. The size of data read is determined by the data type of the pointer.
    Example with Character Pointer:
        
            A character pointer (P) points to a character variable (C) storing 'A'. Dereferencing P reads one byte.
        
    
    Example with Integer Pointer:
        
            An integer variable (I) with a value of 10 occupies four bytes. A pointer (PI) points to I, and dereferencing PI reads four bytes.
        
    
    Variable Types and Sizes:
        
            Character (1 byte), Integer (4 bytes), Float (4 bytes), Long Long Int (8 bytes).
        
    
    Pointer Dereferencing and Modification:
        
            Dereferencing pointers allows reading and modifying the values they point to.
            Example results showed updated values after modification.
        
    
    Conclusion: The data type associated with a pointer is crucial as it dictates how many bytes to read during dereferencing. This concept will be further explored with structures and type casting in future discussions.

*/
#include<stdio.h>
void main(){
    char            a='A';
    int             b=1021;
    float           c=1.0;
    long long int   d=12345;
    
    char *pa = &a;
    int *pb = &b;
    float *pc = &c;
    long long int *pd = &d;

    printf("sizeof(*pa): %lu\nsizeof(*pb): %lu\nsizeof(*pc): %lu\nsizeof(*pd): %lu\n",
                sizeof(*pa)     ,sizeof(*pb)    ,sizeof(*pc)    ,sizeof(*pd));

    *pa = 'B';
    *pb = *pb + 1;
    *pc = *pc + 1;
    *pd = *pd + 1;

    printf("a: %c\nb:%d\nc:%f\nd:%lld",*pa,*pb,*pc,*pd);

    printf("\n size of the pointer : %d",sizeof(pa));

}