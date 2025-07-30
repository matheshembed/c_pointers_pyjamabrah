// S7L2. Allocation failure | Understanding C - Pointers

#include<stdio.h>
#include<stdlib.h>

#define REQUEST 1*1024*1024*1024

int main(){

    int *p;

    for(int i=0; i<10000000; i++){
         int *p =(int *)malloc(REQUEST);
         printf("p: %p\n", p);
         if(p == NULL){
            return -1;
         }
    }
   
    return 0;
}