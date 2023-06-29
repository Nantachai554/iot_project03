//for

#include<stdio.h>

void main(){
    int number;
    int  i;
    printf("----------------------\n");
    printf("Multipcation\n");
    printf("----------------------\n");
    printf("Iuput number :");
    scanf("%d",&number);
    printf("----------------------\n");
    for(i=1;i<=12 ;i++ ){
        printf("%d x %d = %d\n",i,number,i*number);
    }
}