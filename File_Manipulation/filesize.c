#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>
int main(){
    char buffer[1024];
    int fd = open("file.txt",O_RDONLY);
    off_t a = lseek(fd,0,SEEK_END);
    printf("Size of file is %ld\n",a);
    lseek(fd,4,SEEK_SET);
    read(fd,buffer,1024);
    write(0,buffer,1024);
    close(fd);
}