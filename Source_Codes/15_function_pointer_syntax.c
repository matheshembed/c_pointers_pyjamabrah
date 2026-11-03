// S5L2. function pointers syntax | Understanding C - Pointers

#include <stdio.h>

void function_1(){
    printf("Function 1.\n");
}

void function_2(){
    printf("Function 2.\n");
}

int main(){
    void (*func_ptr)(); // this is the syntax for a function pointer 
    // syntax --  return_datatype (*name)(datatypes inputs);
    // return_datatype -- what the function will return (the original function in which the function pointer is pointing to )
    // when dereferenced will return

    // so in our case both the function_1 and function_2 returns nothing (void)

    //if the function takes inputs(parameter) then we have to specify the datatype of the parameter

    // (*function_pointer_name)(parameters_are empty_in_our_case)

    func_ptr = function_1; //here we are not calling the function that is why the brackets are not there after the name
    func_ptr(); // Dereferencing the function pointer

    // OWN LINE printf("add of funcptr: %p ",&func_ptr);

    func_ptr = function_2;//here we are not calling the function that is why the brackets are not there after the name
    func_ptr(); // Dereferencing the function pointer
    // if we have parameters in function we are pointing to we have to pass the parameter even in the func_ptr
}