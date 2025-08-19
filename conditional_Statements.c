//basic calculator model with conditional statements
#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main(){
    int a,b,input;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter another number");
    scanf("%d",&b);
    printf("select the operation need to execute\n1)addition\n2)substraction\n3)multiplication\n4)division\n");
    scanf("%d",&input);
    if(input==1){
        int ret_Sum=add(a,b);
        printf("the sum is=%d",ret_Sum);

    }else if(input==2){
        int ret_sub=sub(a,b);
        printf("the answer is=%d",ret_sub);
        
    }else if(input==3){
        int ret_mul=mul(a,b);
        printf("the answer is=%d",ret_mul);
    }
    else if(input==4){
        int ret_div=div(a,b);
        printf("the answer is=%d",ret_div);
    }else{
        printf("invalid options selected");
    }

}
int add(int a,int b){
    int sum=a+b;
    return sum;
}
int sub(int a, int b){
    int ans=a-b;
    return ans;
}
int mul(int a,int b){
    int ans=a*b;
    return ans;
}
int div(int a,int b){
    int ans=a/b;
    return ans;
}