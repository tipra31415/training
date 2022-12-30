#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    scanf("%d",&a);
    int arr[a];
    int temp=a;
    int i=0;
    while(temp!=0)
    {
        int d=temp%10;
        arr[i++]=d;
        temp/=10;
    }
    for(int j=0;j<i;j++)
        printf("%d",arr[j]);
    return 0;
}
