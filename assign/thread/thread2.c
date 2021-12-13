#include<stdio.h>
#include<pthread.h>

void *hello_thread(void *argc)
{
    int *bye_thread=(int *)argc;
    
        printf("Hello\n");
        printf("Bye\n");


     return NULL;
}

int main(int argc, char const *argv[])
{
    
    pthread_t bye;
      
    printf("Before thread\n");  
    pthread_create(&bye,NULL,hello_thread, (void *)&bye);

     pthread_join(bye,NULL);

     printf("After thread\n");
    
    pthread_exit(NULL);

    return 0;
}