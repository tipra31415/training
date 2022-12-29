#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,add_int,diff_int;
    float c,d,add_float,diff_float;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    add_int=a+b;
    diff_int=abs(a-b);
    add_float=c+d;
    diff_float=fabs(c-d);
    printf("%d %d\n",add_int,diff_int);
    printf("%.1f %.1f",add_float,diff_float);    
    return 0;
}
