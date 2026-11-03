// S5L3. typedef and function pointers | Understanding C - Pointers
#include <stdio.h>

void function_1(int a){
    printf("function_1 : a=%d\n",a);
}

void function_2(int b){
    printf("function_2 : b=%d\n",b);
}

typedef void (*func_ptr)(int);
// once we have typedefed the function pointer declaration here the name of the func_ptr becomes a new type and that new type is function pointer type

// so next time when we are using it we create a variable of this type
// func_ptr pf;
// func_ptr qf;

// we can no longer use this func_ptr name that is the only thing we have to remember

int main(){
   // void (*func_ptr)(int); ==//typedef void(*func_ptr)(int)
    // Refer to the 15th code to realize the difference in the syntax 
    // declaring again and again will be a tidious process that is why we are using typedef

    func_ptr pf;
    // once we typedefed the function pointer we cant use it 
    //we have to assign some variable name to it 

    pf=function_1;
    pf(10);

    pf=&function_2;// using "&" and not using it makes no difference
    pf(20);

    // func_ptr qf;
    // qf=function_2;
    // qf(20);
    // this is also good and will execute

    return 0;
}