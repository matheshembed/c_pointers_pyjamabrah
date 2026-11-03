/*S3L3. Many *s and Many &s | Understanding C - Pointers*/
#include<stdio.h>

void main(){

    int i=10;

    printf("i: %d , &i: %p , *&i : %d , *&*&i: %d ,  *&*&*&i: %d ", i , &i , *&i , *&*&i , *&*&*&i);
                            //*& will cancel out so it is i only      same for *&*& and *&*&*& it only returns i
                
    *&*&*&i=20;
    printf(" \n i: %d , &i: %p , *&i : %d , *&*&i: %d ,  *&*&*&i: %d ", i , &i , *&i , *&*&i , *&*&*&i);

    // &&&i is not valid and ***i is also not valid means gives error
    // ***i=20;
    // printf("i: %d , &i: %p , *&i : %d , *&*&i: %d ,  *&*&*&i: %d ", i , &i , *&i , *&*&i , *&*&*&i);

    // &&&i=20;
    // printf("i: %d , &i: %p , *&i : %d , *&*&i: %d ,  *&*&*&i: %d ", i , &i , *&i , *&*&i , *&*&*&i);

        
}