#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(int j=0;j<=n-1;j++)
        sum+=arr[j];
    printf("%d",sum);
    return 0;
}
