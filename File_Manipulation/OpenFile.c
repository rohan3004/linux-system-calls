#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(){
	const char path[]="./newDir";
	int fd = open("file.txt",O_RDONLY);
	if(mkdir(path,755)==0)
			write(0,"Success",7);
	else
		write(0,"failed",6);
	return 0;
	}
