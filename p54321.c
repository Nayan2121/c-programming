#include<stdio.h>
int main()
{
	int i=5,j,a='A';
	while(i>=1)
	{	j=5;
		while(j>=i)
	{
		printf("%d ",j);
		j--;
	}		
	printf("\n");
	i--;
	}
}