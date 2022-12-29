#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int d;
    int rev;
    scanf("%d",&n);
  int temp=n;
    while(temp!=0)
    {
        d=temp%10;
        rev=(10*rev)+d;
        temp=temp/10;
    }
    if(n==rev)
        printf("Yes");
    else
        printf("No");
    return 0;
}
