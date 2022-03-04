#include <stdio.h>
#include <fcntl.h>
#define PATH "/home/alan/Project/CCpp/System_program/Lock/test.txt"

/*
要開啟檔案才能鎖定
*/

int main(){
    int fd = open(PATH, O_WRONLY);
    
    static struct flock lock;
 
    lock.l_type = F_WRLCK;
    lock.l_start = 0;
    lock.l_whence = SEEK_SET;
    lock.l_len = 0;
    lock.l_pid = getpid();

    int ret = fcntl(fd, F_SETLKW, &lock);


    return 0;
}