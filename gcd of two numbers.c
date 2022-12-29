#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int gcd(int,int);
int main() {
    int a,b;
    scanf("%d\n",&a);
    scanf("%d",&b);
    int result=gcd(a,b);
    printf("%d",result);
    return 0;
}
int gcd(int a,int b){
    if(a==0)
        return b;
    else return gcd(b%a,a);
}
