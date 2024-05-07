#include <pthread.h>
#include <stdio.h>
void *fun(void *a){
	char *p =(char*) a;
       printf("Args: %s\n",p);
}
int main(){
	pthread_t thread1;
	pthread_create(&thread1,NULL, fun,"Hello there");
	pthread_join(thread1,NULL);
}
