// S7L3. Memory Leak | Understanding C - Pointers

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *p = (int *)malloc(4);

    printf("before: %d\n",*p); // garbage value
    *p = 4;
    printf("after: %d\n",*p);

    // The Memory is allocated but never freed that is known as memory leak


    return 0;
}
