#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int fibo(int num);
int main() {

    int n ;
    scanf("%d",&n);
    int fibonacci = fibo(n-1);
    printf("%d",fibonacci);
    return 0;
}

// Recursive function to find nth Fibonacci term
int fibo(int n) {

    if (n == 0 || n == 1)  // Base condition
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}
