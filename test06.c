//do-while
#include<stdio.h>

void main(){
    int number;
    int  i = 1;
    printf("----------------------\n");
    printf("Multipcation\n");
    printf("----------------------\n");
    printf("Iuput number :");
    scanf("%d",&number);
    printf("----------------------\n");
    do{
        printf("%d x %d = %d\n",i,number,i*number);
        ++i;
    }while(i<=12);
    }