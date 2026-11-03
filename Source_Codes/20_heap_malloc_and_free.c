// S7L1. heap: malloc and free | Understanding C - Pointers
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *p = (int *)malloc(4);

    printf("before: %d\n",*p); // garbage value
    *p = 4;
    printf("after: %d\n",*p);

    free(p);


    return 0;
}