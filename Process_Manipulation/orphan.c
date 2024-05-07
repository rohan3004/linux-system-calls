#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
	pid_t child = fork();
	printf("Parent id: %d\n",getpid());
	if(child > 0 ){//parent
		printf("Parent's pid %d and exiting\n",getpid());
		exit(0);
	}
	else if(child == 0){//child
		printf("child pid %d and parent's pid %d\n",getpid(),getppid());
		sleep(10);
		exit(0);
	}
	else{
		printf("Forked failed");
	}
}
