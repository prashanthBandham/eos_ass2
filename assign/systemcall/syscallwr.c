#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    printf("Library call: DESD\n"); //library call 
    write(1, "System call: DESD\n", 18);  //This syscall will display "DESD" on Console
    return 0;
}