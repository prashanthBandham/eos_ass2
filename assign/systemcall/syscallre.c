#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 64

int main(int argc, char const *argv[])
{
    int fd;    //file descripter i.e. return type of "open();"
    char buf[BUFF_SIZE];
    ssize_t ret;

    //fd = open("desd.txt", O_WRONLY);
    fd = open("desd.txt", O_RDONLY | O_CREAT, S_IRUSR | S_IWUSR);
    if(-1 == fd)
    {
        perror("Error in open: \n");
        exit(EXIT_FAILURE);
    }

    printf("File descriptor: %d\n", fd);

    ret = read(fd, buf, BUFF_SIZE);
    if(-1 == ret)
    {
        perror("Error in reading: \n");
        exit(EXIT_FAILURE);
    }

    printf("Read data from File: %s\n", buf);
    //printf("Read %d bytes from File\n", ret);
    
    close(fd);
   
    exit(EXIT_SUCCESS);
}

   