#include<stdio.h>

main()
{
	int a,n ,sum=0;
	printf("enter value of n =");
	scanf("%d",&n);
		for (a=1; a<=n;a++)
		{
			sum = sum + a; 
		}
			printf("%d\n",sum);
}