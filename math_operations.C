#include<stdio.h>
//fucntion declaration 
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int main(){
    int a,b,ans;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter another number");
    scanf("%d",&b);
    ans=a+b;
    printf("the answer is%d",ans);
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