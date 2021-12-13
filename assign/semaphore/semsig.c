#include<stdio.h>
#include<pthread.h>
//#include <semaphore.h>

int a=10,b=20;
int sum;

//sem_t s1,s2;

void *input_thread(void *arg)
{
    while(1)
    {
    scanf("%d", &a);
    scanf("%d", &b);
    }
}
void *proc_thread(void *arg)
{
    while(1)
    {
         sum = a+b;
         printf("Sum: %d\n", a+b);
    }
}

int main(int argc, char const *argv[])
{

    pthread_t inputTid, procTid;
    pthread_create(&inputTid, NULL, input_thread, NULL);
    pthread_create(&procTid, NULL, proc_thread, NULL);
    pthread_join(inputTid, NULL);
    pthread_join(procTid, NULL);
    return 0;

}