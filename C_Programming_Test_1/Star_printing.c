#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        for(int k=0;k<=i;k++){
            printf("*");
        }
        printf("-");
        printf("\n");
    }
}