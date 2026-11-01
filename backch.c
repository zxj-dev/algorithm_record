#include <stdio.h>
int main ()
{
	char ch,BackCh;
	printf("Please inpute a capital letter: ");
	ch = getchar ();
	BackCh = (ch - 'A' + 1) % 26 + 'A';
	printf("The next letter is %c\n",BackCh);
	return 0;
}
