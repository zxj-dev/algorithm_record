#include <stdio.h>
int main ()
{
	int n,k,b,i,x,y,sum=0;
	scanf("%d%d%d",&n,&k,&b);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&x,&y);
		if(y==k*x+b)
		{
			sum += 1;
		}
	}
	printf("%d",sum);
	return 0;
}
