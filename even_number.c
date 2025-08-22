#include<stdio.h>
int main(){
    //printing even numbers using loop
    for(int i=0;i<=10;i=i+2){
        printf("%d\n",i);
    }

    //assigning even numbers to an array
    int mark[5];
    for(int i=0;i<=10;i=i+2){
        mark[i]=i;
    }

}
