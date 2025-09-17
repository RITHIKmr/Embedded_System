//printing elements of array using void pointer
#include<stdio.h>
int main(){
    int arr[]={4,3,6,8,9,3,5};
    void *ptr=arr;
    for(int i=0;i<7;i++){
        printf("%d position value of array:%d\n",i,*((int*)ptr+i)); 
    }
}