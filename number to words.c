#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a;
scanf("%d",&a);
int temp=a;
char * arr[a];
int i=0;
while(temp!=0)
{
    int d=temp%10;
    switch(d)
    {
        case 1: arr[i]= "one ";
        break;
        case 2: arr[i]= "two ";
        break;
        case 3: arr[i]= "three ";
        break;
        case 4: arr[i]= "four ";
        break;
        case 5: arr[i]= "five ";
        break;
        case 6: arr[i]= "six ";
        break;
        case 7: arr[i]= "seven ";
        break;
        case 8: arr[i]= "eight ";
        break;
        case 9: arr[i]= "nine ";
        break;
        case 0: arr[i]= "zero ";
        break;
    }
    i++;
    temp/=10;
}
    
    for(int j=i-1;j>=0;j--)
        printf("%s",arr[j]);
    return 0;
}

 
