#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>  
#define size 100
int main()
{
    pid_t id;
    int arr[2],sum;
    char buff[size];
    int pid1[2];
    pipe(pid1);
    id = fork();

    if(id == 0)
    {
       printf("Child process");
       read(pid1[0],buff,size);
       //read(pid1[0],arr,size);
        printf("%d %d\n",arr[0],arr[1]);

    }
    else
    {
       printf("Parent process\n");
       close(pid1[0]);

       printf("Enter two integers:\n");
       scanf("%d %d",arr[0],arr[1]);
       write(pid1[1],(int *)arr,0);
       printf("data sent sucessfully\n");
    }
    return 0;
}