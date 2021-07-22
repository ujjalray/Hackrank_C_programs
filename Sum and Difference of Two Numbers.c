#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n=0,m=0;   //here is variabe declere
    float a=0,b=0;
    
    scanf("%d %d", &n, &m);
    scanf("%f %f", &a, &b);
    
    printf("%d %d\n", n+m,n-m); // 14 6
                                 
    printf("%.1f %.1f", a+b, a-b);   //6.0 2.0
    
     
     
    return 0;
}
