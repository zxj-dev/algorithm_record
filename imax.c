#include <stdio.h>
int imax (int x,int y)
{
	if (x>y)
		return x;
	else
		return y;
}

int main ()
{
	int num1,num2,MaxValue;
	scanf ("%d%d",&num1,&num2);
	MaxValue = imax (num1,num2);
	printf("The max value is %d\n",MaxValue);
	return 0;
}
