/*S3L4. pointer to pointer | Understanding C - Pointers*/

#include<stdio.h>

void main()
{
    int i=10;
    int *pi=&i;
    int **ppi=&pi;
    int ***pppi=&ppi;

    printf("%p %p %p %p \n", &i , pi , ppi , pppi);


    printf("Address of i : %p \n",&i);
    printf("Address of pi : %p \n",&pi);
    printf("Address of ppi : %p \n",&ppi);
    printf("Address of pppi : %p \n",&pppi);

    printf("where pi is pointing  : %p \n",pi);
    printf("where ppi is pointing  : %p \n",ppi);
    printf("where pppi is pointing  : %p \n",pppi);

    printf("%d",sizeof(pppi));// the size of the pointer is 4 byte for my machine which is 32 bit

    
    
    printf(" \n %d ",***pppi);





}