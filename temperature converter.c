#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int fahrenheit;
    scanf("%d",&fahrenheit);
    float celcius;
    celcius=(fahrenheit-32.0)*5.0/9.0;
    printf("%0.2f",celcius);
    return 0;
}
