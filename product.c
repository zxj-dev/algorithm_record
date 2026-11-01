#include <stdio.h> 
int main ()
{
	int T,n,i,j,//`product = 1` should be placed inside the outer loop, or the second iteration will reuse the product value from the first group.
	result;//To prevent overflow, `product` and `result` should be declared as `long long`.
	scanf("%d",&T);
	for(j=1;j<=T;j++)
	{
		scanf("%d",&n);
		if(n > 0)
		{
			for(i=n-1;i>=1;i=i-2)//The case where `n = 1` is not covered. 
			{
				product = product * i;
				result = 2 * product;//`result` is computed in every loop iteration, which is redundant. 
			}
			printf("%d\n",result);
		}
		else 
		{
			printf("2");
		}	
	}
	return 0;
}
