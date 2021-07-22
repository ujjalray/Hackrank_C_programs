#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char or[20];
    char vr[20];
    
    scanf("%c\n",&ch);
    scanf("%s\n",&or);
    //scanf("%s",&vr);
   // scanf("%[^\n]s",&vr);
    scanf("%[^\n]s", vr);

    printf("%c\n", ch);
    printf("%s\n", or);
    printf("%s\n", vr);

    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
