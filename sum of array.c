#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    
        int n,sum=0,i;
        scanf(" %d",&n);
        int *arr = (int*)malloc(n * sizeof(int));
        
        for(i=0;i<n;i++){
             
           scanf("%d",&arr[i]);
            sum=sum+arr[i];
            
         }
       
        printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   
return 0;
}