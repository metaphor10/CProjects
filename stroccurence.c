#include <stdio.h>
#include <math.h>
#include <string.h>
int any(char s1[], char s2[])
{
	int len1, len2,i,j;
	
	len1=strlen(s1);
	len2=strlen(s2);
	for (i=0;i<strlen(s1)-1;i++)
	{
		for (j=0;j<strlen(s2)-1;j++)
		{
			if (s1[i]==s2[j])
			{
				
				return i;
			}
		}
	}

	return -1;

}
main()
{
	int place1=0,place2=0;
	char firststr[100];
	char secondstr[100];
	while ((firststr[place1]=getchar())!='\n' && place1<99)
	{
		place1++;
	}
	while ((secondstr[place2]=getchar())!='\n' && place2<99)
	{
		place2++;
	}
	firststr[place1+1]='\0';
	secondstr[place2+1]='\0';
	printf("%d\n", any(firststr,secondstr) );
}