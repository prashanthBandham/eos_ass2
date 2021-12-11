#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{

    printf("Before exec\n");
    execl("/bin/ls", "/bin/ls", NULL);
    printf("After exec\n");

    return 0;
}

