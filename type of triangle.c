#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a == b && b==c)
        printf("Equilateral");
    else if (a == b || b==c || c==a)
        printf("Isosceles");
    else 
        printf("Scalene");
    return 0;
}
