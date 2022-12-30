#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,z;
    scanf("%d",&n);
    scanf("%d",&z);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
        scanf("%d ",&arr[i]);
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            int sum=arr[j]+arr[k];
            if(sum%z==0)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
