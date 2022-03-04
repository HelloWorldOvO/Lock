#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#define FILE "./test.txt"
#define READ_LEN 1032

int main(){
    int file_len = 0;
    int file_total = 0;
    int read_len = 0;
    char buf[READ_LEN] = {0};
    int pos = 10;
    int size = 20;
    char write_line[READ_LEN] ="";
    int write_fd = open(FILE,O_RDWR|O_CREAT);
    if(write_fd < 0 ){
        printf("file open error\n");
        return 1;
    }
    printf("input:");
    scanf ("%[^\n]%*c", write_line); //input command
    
    file_len = (int)lseek(write_fd,pos -1,SEEK_SET);//get file total size
    write(write_fd,write_line,size);//file write
    file_len = file_len - read_len;
    memset(buf,0,1024);
    close(write_fd);
return 0;

}






