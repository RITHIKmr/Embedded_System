//Q 3.) clear the ith bit of a number
#include <stdio.h>
int Show_Bin(int);
int Clear_Bit(int,int);
int main() {
    int n,pos;
    printf("enter a number : ");
    scanf("%d",&n);
    Show_Bin(n);
    printf("\nenter position to clear : ");
    scanf("%d",&pos);
    Clear_Bit(n,pos);
    

    return 0;
}
int Show_Bin(int a){
    int j=1;
    for(int i=31;i>=0;i--){
        int mask=0;
        mask=1<<i;
        if(a&mask){
            printf("1");
        }else{
            printf("0");
        }
        if(j%4==0){
        printf(" ");
    }
    j++;
    }
    
}
int Clear_Bit(int n,int pos){
    int mask=1<<pos-1;
    mask=~mask;
    n=n&mask;
    Show_Bin(n);
}