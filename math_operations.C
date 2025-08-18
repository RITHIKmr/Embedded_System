#include<stdio.h>
//fucntion declaration 
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int main(){
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter another number");
    scanf("%d",&b);
    int add_res=add(a,b);
    int sub_res=sub(a,b);
    int mul_res=mul(a,b);
    int div_res=div(a,b);
    printf("the sum is=%d\n",add_res);
    printf("the substraction result is=%d\n",sub_res);
    printf("the multiplication result is=%d\n",mul_res);
    printf("the division result is=%d\n",div_res);
}
//function definition
int add(int a,int b){
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