#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id;

    printf("Before fork\n");
    id = fork();
    printf("After fork\n");


    if(0 == id) // child
    {
        printf("Child: Before exec\n");
        execl("/home/sai/saik/pids/pid", "/home/sai/saik/pids/pid", NULL);
        printf("Child: After exec\n");
    }
    else
    {
        printf("Parent\n");
    }

    printf("Program exited\n");

    return 0;
}

