#include <stdio.h>
int main() 
{
    int a, b, n, r, i;
    scanf("%d %d %d", &a, &b, &n);
    int remainder = a % b;  
    for(i = 1; i <= n; i++) {
        // 1. Current digit = (remainder * 10) / b
        r = (remainder * 10) / b;   
        // 2. Update remainder = (remainder * 10) % b
        remainder = (remainder * 10) % b; 
    }	//Lvalue required on left of assignment, expression not allowed! 
    printf("%d\n", r); 
    return 0;
}
