#include <stdio.h>
int main ()
{
	long long num,reversed_num = 0;
	printf("Please input a non-negative integer£º");
	scanf("%lld",&num);
	if (num == 0 ) 
	{
		printf("The inversion number is£º0\n");
		return 0;
	}
	while (num > 0)
	{
		int digit = num % 10;
		reversed_num = reversed_num * 10 + digit;
		num /= 10;
	}
	printf("The inversion number is£º%lld\n",reversed_num);
	return 0;
}
