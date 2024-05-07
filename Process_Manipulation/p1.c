#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(){
	printf("This is parent process: %d\n",getpid());
	pid_t child = fork();
	if(child == 0){
		printf("child process: %d and parent: %d\n",getpid(),getppid());
	}
	else if(child>0){
		printf("parent process: %d\n",getpid());
	}
	else{
		printf("Forked Failed");
		return 1;
	}
	return 0;

}
