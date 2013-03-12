#include <stdio.h>
#include <limits.h>
main()
{
	char try1;
	int i;
	int c;
	try1=0;
	for (i=0;i<500 && (c=getchar())!=EOF;i++)
	{
		try1=try1+1;
		printf("%d\n",try1 );
	}
}