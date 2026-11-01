#include <stdio.h>
int main ()
{
	int n,i,a,sum=0;
	double average;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		sum += a;
	}
	average = sum * 1.000000 / n;
	printf("%d %.5lf",sum,average);
	return 0;
}
