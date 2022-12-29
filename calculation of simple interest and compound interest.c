#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float principal,rate,time,si,ci;
    scanf("%f %f %f",&principal,&rate,&time);
    si=(principal*rate*time)/100.0;
    float amount=principal*((pow((1+rate/100.0),time)));
    ci=fabs(amount-principal);
    printf("%.2f %.2f",si,ci);
    return 0;
}
