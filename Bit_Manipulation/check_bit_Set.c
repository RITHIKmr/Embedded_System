//Q 1. )Check if the ith bit is set or not
#include<stdio.h>
int main(){
    int n,pos;
    printf("enter a number to check bit: ");
    scanf("%d",&n);
    printf("enter position of bit need to check: ");
    scanf("%d",&pos);
    int mask=0;
    mask=1<<(pos-1);
    if(n&mask)
    printf("the %d position of bit is set",pos);
    else
    printf("the %d position of bit is not set",pos);
}

