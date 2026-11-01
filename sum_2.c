#include <stdio.h>
int main ()
{
	long long n,sum=0,i=1;
	scanf("%lld",&n);
	for(;i<=n;i++)
	{
		sum += i;
		printf("%lld\n",sum);
	}
	return 0;
}
