//S5L4. Example - function pointer array | Understanding C - Pointers
// This code can be implemented in the c_pointer codespace published by pyjamabrah piyush 

//https://youtu.be/mbwGl0fvIrA?si=OqJtAenzbD3_FtZk

// add the necessary main file , math_library.c file and math_library.h file inthe code space to see the output

// run the code using 
// gcc main.c math_library.c
// ./a.out

#include "math_library.h"

 
int main(){
    execute_operation(ADD, 100, 5);
    execute_operation(SUB, 100, 5);
    execute_operation(MUL, 100, 5);
    execute_operation(DIV, 100, 5);
}