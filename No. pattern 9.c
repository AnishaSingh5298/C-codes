#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char k;
	for(i=1;i<=5;i++)
	{
		k='A';
		for(j=1;j<=5;j++)
		{
			if(j>=6-i)
			printf("%c",k)
			else
			printf(" ");
		}
		printf("\n");
	}
}
