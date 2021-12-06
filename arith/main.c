#include<stdio.h>

int main(int argc, char const *argv[])
{
	
    int result = 0;
    result = add(10, 20, 30);
    printf("Addition: %d\n", result);

    result = sub(10, 20);
    printf("Substraction: %d\n", result);
    return 0;
}

