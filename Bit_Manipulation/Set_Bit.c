
//Set the ith bit of a number.
#include <stdio.h>
int Set_Bit(int,int);
int Show_Bin(int);
int main() {
    int pos;
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    Show_Bin(n);
    printf("\nenter the postion to set : ");
    scanf("%d",&pos);
    Set_Bit(n,pos);
    return 0;
}
int Show_Bin(int n){
    int j=1;
    for(int i=31;i>=0;i--){
        int mask=0;
        mask=1<<i;
        if(n&mask){
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
int Set_Bit(int a,int b){
    int mask=0;
    mask=1<<b-1;
    a=mask|a;
    Show_Bin(a);
    
}