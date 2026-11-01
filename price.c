#include <stdio.h>
int main ()
{
    int a,b,n,num;
    scanf("%d\n",&n);
	scanf("%d\n",&a);
    scanf("%d",&b);
	num = n / (a + b);
    printf("%d",num);
    return 0;
}
