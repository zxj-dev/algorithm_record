#include <stdio.h>
int main ()
{
	long long n;
	scanf("%lld",&n);
	for(;n != 1;)/*Initialization may be omitted; loop conditions have multiple 
           	representations,and variables can be updated within the loop body.*/
	{
		if(n%2 != 0)
		{
			printf("%lld*3+1=%lld\n",n,n*3+1);/*Code runs sequentially from top to 
			                                 bottom;`n` keeps its current value.*/
			n = n*3+1;
		}
		else
	 	{
			printf("%lld/2=%lld\n",n,n/2);
			n = n/2;
		}
	}
	printf("End");
	return 0;
}
