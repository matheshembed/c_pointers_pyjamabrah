/* S6L1. What is a void pointer? | Understanding C - Pointers*/

// Declaration of void pointer
//int i=10 ;
//void *pi=&i;

// WE CANNOT DEREFERENCE A VOID POINTER "*Pi" 
// A void pointer can simply hold address and it cannot be dereferenced

#include <stdio.h>

int main(){
    int i=10;
    void *pi = &i;

    printf("pi: %p, &i: %p\n",pi,&i);

    //printf("*pi: %d\n",*pi); will throw an error
    // Beacause the cpu dont understand how many bytes it should read coz there is not data type (void)
    //so that dereferencing cant be done

    return 0;
}