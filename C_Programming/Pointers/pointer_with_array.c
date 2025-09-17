//printing array elements address and values using pointer
#include<stdio.h>
int main(){
   int arr[5]={1,4,6,8,5};
   printf("adress of arr:%p\n",arr);
   for(int i=0;i<5;i++){
       printf("adress of arr[%d]:%p\n",i,arr+i);
  }

   for(int k=0;k<5;k++){
      printf("value of arr[%d]:%d\n",k,*(arr+k));
   }
}