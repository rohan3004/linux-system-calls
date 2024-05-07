#include <fcntl.h>
#include <unistd.h>
int main(){
    int fd = open("file.txt",O_RDONLY | O_CREAT,0644);
    close(fd);
}