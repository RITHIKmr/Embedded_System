#include<stdio.h>
//fucntion declaration 
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int main(){
    int ret_Sum=add(5,6);
    printf("the sum is =%d \n",ret_Sum);
    int ret_sub=sub(5,6);
    printf("the substracted answer is=%d \n",ret_sub);
    int ret_mul=mul(5,6);
    printf("the multiplied answer is=%d \n",ret_mul);
    int ret_div=div(5,6);
    printf("the divided answer is=%d \n",ret_div);
}
//function definition
int add(int a, int b){
    int sum;
    sum=a+b;
    return sum;

}
int sub(int a,int b){
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