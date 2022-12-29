#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,res;
    char ch;
    scanf("%d %d\n",&a,&b);
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
            res=a+b;
            printf("%d",res);
            break;
        case '-':
            res=a-b;
            printf("%d",res);
            break;
        case '*':
            res=a*b;
            printf("%d",res);
            break;
        case '/':
            res=a/b;
            printf("%d",res);
            break;
        case '%':
            res=a%b;
            printf("%d",res);
            break;
        default:printf("Invalid Choice");
    }
    return 0;
}
