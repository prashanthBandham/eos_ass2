#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    pid_t id;
    printf("Before fork\npid %d\n",getpid());
    id=fork();
    printf("After fork:\n");

    if(0==id)
    {
        printf("Child pid %d\n",getpid());
    }
    else
    {
        printf("Parent pid %d\n",getpid());
    }
    return 0;
}

