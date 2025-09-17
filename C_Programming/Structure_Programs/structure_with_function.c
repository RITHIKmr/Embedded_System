#include<stdio.h>
 struct employee{
        char name[20];
        int id;
        float salary;
    };
    void increment(struct employee,int);

int main(){

    struct employee e1={"Rithik MR",5,50000.00};
    printf("Salary before increment%.2f\n",e1.salary);
    increment(e1,10);


}
void increment(struct employee e,int inc){
    e.salary=e.salary+(e.salary/100)*inc;
    printf("Salary after increment:%.f",e.salary);
}