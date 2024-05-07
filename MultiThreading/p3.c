#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void *fun(void *args){
	int *p = (int *)malloc(sizeof(int));
	printf("Args: %s\n",(char *)args);
	*p = 69; 
	pthread_exit(p);
}
int main(){
	int *s = (int *)malloc(sizeof(int));
	pthread_t t;
	pthread_create(&t,NULL,fun,"Sixty Nine");
	pthread_join(t,(void **)&s);
	printf("%d\n",*s);
}
