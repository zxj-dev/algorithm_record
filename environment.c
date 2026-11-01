#include <stdio.h>
int main ()
{
	int i,t,n,x,sum;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d%d",&n,&x);
		sum = n + n / x;
		printf("%d\n",sum);
	}
	return 0;
}
