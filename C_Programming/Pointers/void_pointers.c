//dereferencing void pointers
#include<stdio.h>
int main(){
    int a=10;
    void *p=&a;
    printf("value of a using void pointer:%d",*(int*)p);
}