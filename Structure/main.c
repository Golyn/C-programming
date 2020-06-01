#include <stdio.h>
#include <stdlib.h>
/*

*/
//structure definition
struct employee
{
    //employee members
    int staffID;
    char fn[100];
    char ln[100];
    float BasicSalary;
    float medAllow;
    float HouseAllow;
    float GrossPay;
}obj1;//initial optional created object

int main()
{
    // Assigning values to employee members using object
    obj1.staffID=999;
    strcpy(obj1.fn,"Mike"); // coping values into fn using string copy
    strcpy(obj1.ln,"Seth");  // coping values into ln using string copy
    obj1.BasicSalary=5700;
    obj1.medAllow=20.5;
    obj1.HouseAllow=40.5;
    obj1.GrossPay=obj1.BasicSalary+obj1.medAllow+obj1.HouseAllow;
// OUTPUT
    printf("O U T P U T\n");
    printf("=============\n");
    printf("Staff ID: %d\n", obj1.staffID);
    printf("First Name: %s\n", obj1.fn);
    printf("Last Name: %s\n", obj1.ln);
    printf("Basic Salary: %.2f\n", obj1.BasicSalary);
    printf("Medical Allowance: %.2f\n", obj1.medAllow);
    printf("Housing Allowance: %.2f\n", obj1.HouseAllow);
    printf("GrossPay: %.2f\n", obj1.GrossPay);
    printf("========THANKS=========\n");

    return 0;
}
