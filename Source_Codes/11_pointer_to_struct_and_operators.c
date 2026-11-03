/*  S4L2. Pointer to a struct, *, and | Understanding C - Pointers*/
#include<stdio.h>
struct my_struct {
    long long int a;
    float b;
    int c;
};
void main(){

    struct my_struct var = {
        .a = 1024,.b = 2.5,.c = -1
    };

    struct my_struct *ptr = &var;

    (*ptr).a=(*ptr).a +1;
    (*ptr).b=(*ptr).b +1;
    (*ptr).c=(*ptr).c +2;


    printf("var.a: %lld, var.b: %f, var.c: %d\n" , var.a,var.b,var.c);
    printf("(*ptr).a: %lld, (*ptr).b: %f, (*ptr).c: %d\n\n ",(*ptr).a,(*ptr).b,(*ptr).c);

    ptr->a=ptr->a +1;
    ptr->b=ptr->b +1;
    ptr->c=ptr->c +2;

    printf("var.a: %lld, var.b: %f, var.c: %d\n" , var.a,var.b,var.c);
    printf("ptr->a: %lld, ptr->b: %f, ptr->c: %d\n" ,ptr->a,ptr->b,ptr->c);
    printf("(*ptr).a: %lld, (*ptr).b: %f, (*ptr).c: %d\n\n ",(*ptr).a,(*ptr).b,(*ptr).c);








}