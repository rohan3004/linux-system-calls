#include <dirent.h>
#include <sys/types.h>
#include <stdio.h>
int main(){
    DIR *dir;
    struct dirent *entry;
    dir = opendir("..");
    if(dir){
        printf("Contents of the directory:\n");
        while((entry = readdir(dir)) != NULL){
            printf("%s\n", entry->d_name);
        }
        closedir(dir);
    }
    return 0;
}