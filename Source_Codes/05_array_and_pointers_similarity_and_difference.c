//S3L2. Array and Pointers Similarity and differences | Understanding C - Pointers

#include<stdio.h>
// Array and Pointers are same But there is a small difference in storing them 

void main(){
    char *name_ptr="PIYUSH";// We have to mention the null character "\0" as it knows the string is ended
    char name_array[]="piyush";//No need to mention because the compiler will automatically assign the null character at the end of the array 
            // The name_array just by itself is a pointer pointing to the string not name_array[]

    /*1.Similarity betweeen array and pointers*/
    printf("name_ptr: %s, name_ptr: %p, *name_ptr: %c\n",
            name_ptr,     name_ptr,     *name_ptr );

     printf("name_array: %s, name_array: %p, *name_array: %c\n",
            name_array,     name_array,     *name_array );

    /*2. Difference between the array and the pointer*/
    // printf("sizeof(name_ptr): %lu , sizeof(name_array): %lu \n ",sizeof(name_ptr),sizeof(name_array));
    // int x[]={10,11,12}; // it is an integer in a array so each int is 4byte long so the total size of the array will be 4(int) X 3elements = 12bytes
    // int *xptr=x;

    // printf("Sizeof(xptr): %lu , Sizeof(x): %lu\n",sizeof(xptr),sizeof(x));

    // the size of the pointer in this machine is 4 bytes that is why when it comes to pointer variable it returns 4 the size of the pointer may vary with each machine
    // try github codespace by piyush to get a diffreent output for the pointer variables

    // when it comes to the array pointer it will return what storage it is taken in the memory for example look at the x[]={10,11,12} above and read the comment near to it.
    //so the storage of array pointer is the total consumption of the memory by the array so in our case
    //is p,i,y,u,s,h,\0 there will a null character at the end as said before also each char is of 1byte so piyush = 6 bytes and the null character holds an another byte which turns to be the total of 7 byte  ... sizeof(array)

        /* In Behing the scenes all will treated like address but in case of size 
        the compiler will understand .. that i should return the total size consumed by the whole array*/

    /*3.Array can't be Ressigned but a pointer can be reassigned*/
    int x[]={10,11,12};
    int *xptr=x;

    int a[]={110,120,130};
    int i=1024;

    //a=x;//cant reassign the array variable or we cannot assign to a new address
    //a=&i;//not allowed
    xptr=a;//pointer can be reassigned
    int *iptr=&i;

    // We can reassign array elements but not the entire array or the array variable
    





}