#include<stdio.h>
int main(){
    int n;
    printf("enter a number to see its binary");
    scanf("%d",&n);
    for(int i=31;i>=0;i--){
        int mask=0;
        mask=1<<i;
        if(n&mask){
            printf("1");
        }else{
            printf("0");
        }
    }
}