#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
struct cp{
    char *st1;
    char *st2;
    char *result;
};
void *fun(void *args){
    struct cp *arg = (struct cp *)args;
    strcat(arg->result,arg->st1);
    strcat(arg->result,arg->st2);
    printf("%s\n", arg->result);
    pthread_exit(NULL); 
}
int main(){
    pthread_t t1;
    struct cp *arg = (struct cp *)malloc(sizeof(struct cp));
    arg->st1="My Name is: ";
    arg->st2 = "Rohan Chakravarty";
    arg->result = (char *)malloc(sizeof(100));
    pthread_create(&t1,NULL,fun,arg);
    pthread_join(t1,NULL);
}
