#include <stdio.h>
#include <math.h>
/* 
recives a hex number 
as input and converts to integer 
*/
main()
{
	int multi=16;
	int len,i,sum;
	char c;
	sum=0;
	char number[10];/*
	number[0]='3';
	number[1]='C';
	number[2]='B';*/
	int place;
	place=0;
	//input from the user
	while ((c=getchar())!=EOF && place<10)
	{
		number[place]=c;
		place++;
	}
	//calculating the hex number
	for (i=0;i<place+1;i++)
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