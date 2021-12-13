#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int *ptr = NULL;

    ptr = (int *)malloc(sizeof(int) * 10);
    free(ptr);
    
    return 0;
}

