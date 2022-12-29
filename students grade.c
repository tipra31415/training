#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float avg=(a+b+c+d+e)/5.0;
    if(a<0||b<0||c<0||d<0||e<0||a>100||b>100||c>100||d>100||e>100)
        printf("Invalid Score");
    else
    {
    if (avg>=90.0)
        printf("A");
    else if(avg>=80.0&&avg<90.0)
        printf("B");
    else if(avg>=60.0&&avg<80.0)
        printf("C");
    else if(avg<60.0)
        printf("D");
    return 0;
}
}
