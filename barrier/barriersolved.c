#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

pthread_barrier_t init_barrier;

void *i2c_thread(void *data)
{
    printf("I2C init started\n");
    sleep(2);
    pthread_barrier_wait(&init_barrier);
    printf("I2C init completed\n");
}

void *eth_thread(void *data)
{
    printf("Eth init started\n");
    sleep(6);
    pthread_barrier_wait(&init_barrier);
    printf("Eth init completed\n");
}

void *UART_thread(void *data)
{
    printf("UART init started\n");
    sleep(3);
    pthread_barrier_wait(&init_barrier);
    printf("UART init completed\n");
}

void *eeprom_thread(void *data)
{
    printf("eeprom init started\n");
    sleep(4);
    pthread_barrier_wait(&init_barrier);
    printf("eeprom init completed\n");
}

int main(int argc, char const *argv[])
{
    pthread_t i2c, eth, UART, eeprom;

    pthread_barrier_init(&init_barrier, NULL, 4);

    pthread_create(&i2c, NULL, i2c_thread, NULL);
    pthread_create(&UART, NULL, UART_thread, NULL);
    pthread_create(&eth, NULL, eth_thread, NULL);
    pthread_create(&eeprom, NULL, eeprom_thread, NULL);
    pthread_join(i2c, NULL);
    pthread_join(UART, NULL);
    pthread_join(eth, NULL);
    pthread_join(eeprom, NULL);

    return 0;
}

