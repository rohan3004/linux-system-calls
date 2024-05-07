#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *fun(void *args){
    char *msg = (char *)args;
    printf("%ld\n", strlen(msg));
    pthread_exit(NULL);
}
int main(){
    pthread_t t1;
    pthread_create(&t1, NULL, fun, "Hello World");
    pthread_join(t1, NULL);
}