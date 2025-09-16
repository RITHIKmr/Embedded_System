#include<stdio.h>
struct employee{
   char name[20];
   int id;
   float salary;
};
int main(){
struct employee e1={"kapil",2,40000.00};
printf("name:%s  id:%d  salary:%.2f",e1.name,e1.id,e1.salary);
}
