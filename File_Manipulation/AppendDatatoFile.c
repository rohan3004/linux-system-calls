#include <unistd.h>
#include <fcntl.h>
int main(){
    char buffer[] = "Hello this is a sample test\n300804\n";
    int fd = open("file.txt", O_APPEND | O_WRONLY | O_CREAT,0644);
    write(fd,buffer,sizeof(buffer));
}