#include<stdio.h>

void main()
{
	int a,n,fact=1;
	printf("enter value of n = ");
	scanf("%d",&n);
	
	for(a=1; a<=n; a++)
	{
		fact =fact*a;	
	}
		printf("%d",fact);
}