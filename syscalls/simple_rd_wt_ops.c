#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int fd;
    fd=open("desd.txt",O_WRONLY);
    write(fd,"desd",4);
    close(fd);
    return 0;
}

