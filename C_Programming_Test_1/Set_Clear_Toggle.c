//You are given an 8-bit register represented as an unsigned char. Write a function to:
//● Set the 3rd bit (bit index 2).
//● Clear the 6th bit (bit index 5).
//● Toggle the 1st bit (bit index 0). Return the modified register value.
#include<stdio.h>
int Set_Clear_Toggle(int);
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    Set_Clear_Toggle(num);

}
int Set_Clear_Toggle(num){
    int mask=0;
    mask=1<<2;
    num=num|mask;
    mask=0;
    mask=1<<5;
    mask=~mask;
    num=mask&num;
    mask=1;

}
