#include<unistd.h>
#define size 1024
int main(){
    char buffer[size];
    ssize_t a = read(0,buffer,size);
    write(1,buffer,a);
}