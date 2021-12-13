#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>  

int main(int argc, char const *argv[])
{
    unsigned char buff[16];
    pid_t id;
    int fd[2];
    pipe(fd);                    
                                            
    id = fork();
    if(0==id)
    {                                        
        close(fd[1]);                        
        printf("Child: Reading data\n");
        read(fd[0], buff, 16);
        printf("Child read: %d\n", buff[16]);
 
    }
    else
    {
         close(fd[1]); 
         printf("Parent: Writing data\n");
         write(fd[1], "CDAC\n" ,5);
         printf("Parent: Writing done\n");

    }
    return 0;
}