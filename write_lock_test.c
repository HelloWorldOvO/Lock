#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/file.h>
#include <wait.h>
#define PATH "/home/alan/Project/CCpp/System_program/Lock/test.txt"

/*
要開啟檔案才能鎖定
*/

int main(){
    int fd;
    pid_t pid;
    fd = open(PATH, O_RDWR | O_CREAT | O_TRUNC, 0644);
    lseek(fd,0,SEEK_SET); 
    printf("%d: locked!\n", getpid());
    getchar();

    return 0;
}