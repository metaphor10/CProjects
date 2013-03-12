#include <stdio.h>
main ()
{
	int t; 
	int c;
	while ((c=getchar())!=EOF)
	{
		if(c==' '|| t==' ')
		{
			;
		}else
		{
			t=c;
			putchar(t);
		}

	}
}