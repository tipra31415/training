#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf(" ");
        }
        
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
            
       printf("\n");
    }
    return 0;
}
