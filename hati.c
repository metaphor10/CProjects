#include <stdio.h>
#include <math.h>

main()
{
	int multi=16;
	int len,i,sum;
	sum=0;
	char number[3];
	number[0]='3';
	number[1]='C';
	number[2]='B';
	
	for (i=0;i<3;i++)
	{
		if (isdigit(number[i]))
		{
			sum=sum+((number[i]-48)*(pow(multi,i)));
		}else if (number[i]<'G' && number[i]>='A')
		{
			sum=sum+((number[i]-55)*(pow(multi,i)));
		}
	}
	printf("%d",sum);
}