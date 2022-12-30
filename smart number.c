#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    scanf("%d",&a);
    int count=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
            count++;
    }
    if(count%2!=0)
        printf("Yes");
    else printf("No");
    return 0;
}
