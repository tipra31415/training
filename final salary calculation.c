#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float basic_salary,hra,da,gross_salary;
    scanf("%f",&basic_salary);
    if(basic_salary<=10000)
    {
        hra=0.08*basic_salary;
        da=0.1*basic_salary;
    }
    else if(basic_salary<=20000&&basic_salary>10000)
    {
        hra=0.16*basic_salary;
        da=0.2*basic_salary;
    }
    else
    {
        hra=0.24*basic_salary;
        da=0.3*basic_salary;
    }
    gross_salary=basic_salary+hra+da;
    printf("%.2f",gross_salary);
    return 0;
}
