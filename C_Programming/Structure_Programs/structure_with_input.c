#include<stdio.h>
int main(){
    struct employee{
        char name[20];
        int id;
        float salary;
    };
    struct employee e;
    printf("enter the name:\t");
    scanf("%31[^\n]",e.name);
    printf("enter the id:\t");
    scanf("%d",&e.id);
    printf("enter the salary:\t");
    scanf("%f",&e.salary);
    printf("Name is:%s\nId is:%d\nSalary is:%.2f",e.name,e.id,e.salary);

}
