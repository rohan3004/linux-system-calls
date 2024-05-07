#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
	pid_t child = fork();
	if(child == 0){//child
		printf("Inside child with pid %d and ppid %d\n",getpid(),getppid());
		exit(0);
	}
	else if(child>0){//parent
		printf("pid %d\n",getpid());
		sleep(50);
		exit(0);
	}
	else{
		printf("Forked Failed\n");
	}
}
