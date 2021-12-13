#include<stdio.h>
#include<pthread.h>

void *hi_thread(void *argc)
{
    printf("Hi thread\n");
     return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_t hiID;
    printf("Before thread\n");

    pthread_create(&hiID, NULL, hi_thread, NULL);
    pthread_join(hiID, NULL);

    printf("After thread\n");

    return 0;
}