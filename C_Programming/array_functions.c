#include<stdio.h>
int total_sum(int[],int);
int print_elem(int[],int);
int odd_select(int[],int,int[]);
int main(){
    int odd_array[16];
    int arr[]={2,4,6,7,8,2,8,9,6,0,23,6,7,12,3,5};
    int res=total_sum(arr,16);
    printf("the total sum is=%d\n",res);
    print_elem(arr,16);
    odd_select(arr,16,odd_array);
    printf("the odd elements are\n");
    for(int j=0;j<6;j=j+1){
        printf("%d\n",odd_array[j]);
    }
}
//function to find total sum of an array
int total_sum(int arr[],int size){
    int val=0;
    for(int i=0;i<size;i=i+1){
        val=val+arr[i];
    }
    return val;
}
//function to print every elememt of an array
int print_elem(int arr[],int size){
    printf("the elements are in array\n");
    for(int i=0;i<size;i=i+1){
        printf("%d\n",arr[i]);
    }
}
//funtion to eneter every odd numbers into another array
int odd_select(int arr[],int size,int odd_array[]){
    int j=0;
    for(int i=0;i<size;i=i+1){
        if(arr[i]%2!=0){
             odd_array[j]=arr[i];
             j=j+1;        
            }
        
    }
}


