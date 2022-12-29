#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isprime(int);
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(isprime(arr[i])==1)
            printf("yes\n");
        else printf("no\n");
    }    
    return 0;
}

int isprime(int n)
{  
    int count=0;
    for(int i=1;i<=n;i++)
    {
       if(n%i==0)
           count++;
    }
     if (count==2)
         return 1;
     else return 0;
}
