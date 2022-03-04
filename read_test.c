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

    int read_fd = open(FILE,O_RDWR);

    if(read_fd < 0){
        printf("file open error\n");
        return 1;
    }

    file_len = (int)lseek(read_fd,0,SEEK_END);//get file total size
    file_total = file_len;
    printf("file_total:%d\n",file_total);
    lseek(read_fd,0,SEEK_SET);
    printf("read start\n");
    while(read_len = read(read_fd,buf,READ_LEN)){
        printf("read_len:%d\n",read_len);
        // printf("%s",buf);
    }
    printf("\nthis is the end\n");
    close(read_fd);

    return 0;
}


