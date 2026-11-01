#include <stdio.h>
#include <math.h>
int main ()
{
	int i,n,num,s;
	double a,b,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf %lf %d",&a,&b,&num);
		sum += sqrt(a*a + b*b) / 25.0 + 1.5 * num;// Use `+=` to accumulate sum 
	}
	s = (int)ceil(sum);/* ceil is the ceiling function in math library for floating-point numbers; cast to int afterwards.
						Do not use (int)(sum + 1), otherwise 7.0 becomes 8. Replacing 1 with 0.999999 can fix this. */ 
	printf("%d",s);
	return 0;
}

