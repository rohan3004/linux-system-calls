#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
	char a[10];
	if(getcwd(a,10) != NULL)
		printf("%s\n",a);
	else
		printf("getcwd error\n");
}
