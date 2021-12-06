#include<stdio.h>

int main(int argc,char const *argv[])
{
    int *ptr = 0x4000;

    printf("Addr = %d\n", *ptr);
    return 0;
}

