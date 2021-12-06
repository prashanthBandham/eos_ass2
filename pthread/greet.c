#include<stdio.h>
#include <pthread.h>

void *hello_thread(void *arg)
{
    printf("Hello thread\n");
}

int main(int argc, char const *argv[])
{
    pthread_t helloID;
    printf("Main thread: Before creating hello thread\n");

    pthread_create(&helloID, NULL, hello_thread, NULL);
    pthread_join(helloID, NULL);

    printf("Main thread: After creating hello thread\n");

    return 0;
}

