#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char ch;
    scanf("%c",&ch);
    if(isupper(ch))
        printf("Uppercase");
    else if(islower(ch))
        printf("Lowercase");
    else if(ch>='0'&&ch<='9')
        printf("Number");
    else
        printf("SpecialCharacter");
    return 0;
}
