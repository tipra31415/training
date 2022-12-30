#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int product=1;
    int temp=n;
    while(temp!=0)
    {
        int d=temp%10;
        product*=d;
        temp/=10;
    }
    printf("%d",product);
    return 0;
}
