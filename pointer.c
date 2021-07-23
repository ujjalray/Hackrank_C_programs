#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
             
     int max,d;
    max=*a+*b;
    d=abs(*a-*b);
    printf("%d\n%d", max, d);
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);


    return 0;
}
