#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>  

int main(int argc, char const *argv[])
{
    unsigned char buff[16];
    pid_t id;
    int fd[2];
    pipe(fd);                    //fd[0] => reading end;
                                 //fd[1] => writing end;
    id = fork();
    if(0==id)
    {
        printf("Child: Reading data\n");
        read(fd[0], buff, 16);

    }
    else
    {
         printf("Parent: Writing data\n");
         write(fd[1], "CDAC\n" ,5);
    }
    return 0;
}