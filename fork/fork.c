#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    pid_t id;
    printf("Before fork pid: %d\n",getpid());
    printf("After fork:\n");
    id=fork();

    if(0==id)
    {
        printf("Child pid %d\n",getpid());
        printf("Child ppid %d\n",getppid());
    }
    else
    {
        printf("Parent pid %d\n",getpid());
        printf("Parent ppid %d\n",getppid());
        sleep(10);
        printf("Parent finished\n");
    }
    return 0;
}

