#include <unistd.h>
#include <fcntl.h>
int main(){
    char buffer[1024];
    int fd = open("file.txt",O_RDONLY);
    ssize_t size = read(fd,buffer,1024);
    write(1,buffer,size);//to console
    int tooutFd = open("file2.txt",O_WRONLY | O_CREAT | O_APPEND | O_TRUNC,0644);
    write(tooutFd,buffer,size);//to file
    close(fd);
    close(tooutFd);
    return 0;
}