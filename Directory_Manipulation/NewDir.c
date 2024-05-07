#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
int main(){
	mkdir("mynewdir",0777);
    DIR *dir;
    struct dirent *entry;
    dir = opendir("..");
    if(dir){
	    while((entry=readdir(dir)) !=NULL){
		    printf("%s\n",entry->d_name);
	    }

    }
}
