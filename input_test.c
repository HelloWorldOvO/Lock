#include<stdio.h>

int main(){
    char operator;
    int pos,size;
    while(1){
        printf("input:\n");
        scanf("%c",&operator);
        scanf("%d",&pos);
        scanf("%d",&size);
        printf("\noperator:\"%c\"\npos:\"%d\"\nsize:\"%d\"\n",operator,pos,size);

    }

    return 0;
}

