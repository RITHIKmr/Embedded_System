//1. Write a function in C that takes an array of integers and its size, and returns the
//second largest element.
//Constraints:
//● Do not sort the array.
//● Assume the array has at least two distinct elements.
#include<stdio.h>
int sle(int [],int);
int main(){
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",arr+i);
    }
    int res=sle(arr,size);
    printf("the largest element is: %d",res);

}
int sle(int arr[],int size){
    int res=0;
    for(int k=0;k<size;k++){
        if(arr[k]>res){
            res=arr[k];
        }
    }
    return res;
}