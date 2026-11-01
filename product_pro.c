#include <stdio.h> 
int main ()
{
	int T,n,i,j;
	unsigned long long product,result; 
	scanf("%d",&T);
	for(j=1;j<=T;j++)
	{
		scanf("%d",&n);
		product = 1;
		if(n > 1)
		{
			for(i=n-1;i>=1;i=i-2)
			{
				product = product * i;
			}
			result = 2 * product;
			printf("%llu\n",result);//`unsigned long long` corresponds to format specifier `llu`.
		}
		else if(n==1 ||n==0)
		{
			printf("2\n");
		}	
	}
	return 0;
}
