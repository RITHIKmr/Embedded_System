#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the total number of elements");
    scanf("%d",&n);
    int *ptr=(int*)malloc(sizeof(int)*n);
    if(ptr==NULL){
        printf("Dynamic memory allocation failed\n");
    }else{
        printf("Dynamic memory allocation succesfull\n");
    }

    printf("enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }

    printf("the elements are:");
    for(int k=0;k<n;k++){
        printf("%d ",*(ptr+k));
    }
    free(ptr);
}