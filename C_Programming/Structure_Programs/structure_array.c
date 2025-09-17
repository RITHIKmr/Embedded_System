#include<stdio.h>
int  main(){
    struct employee{
        char name[20];
        int id;
        float salary;
    };
    struct employee e[3];
    for(int i=0;i<3;i++){
        printf("enter employee Name:");
        scanf(" %19[^\n]",e[i].name);
        printf("enter employee Id:");
        scanf("%d",&e[i].id);
        printf("enter employee Salary:");
        scanf("%f",&e[i].salary);
    }
    for(int k=0;k<3;k++){
        printf("\n%d)Name:%s\nId:%d\nSalary:%.2f\n",k+1,e[k].name,e[k].id,e[k].salary);
    }
}