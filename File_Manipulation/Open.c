#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
int main(){
	char buffer[10];
	read(0,&buffer,10);
	int fd = open("file.txt", O_WRONLY | O_CREAT, 0644);
	write(fd,&buffer,10);

}
