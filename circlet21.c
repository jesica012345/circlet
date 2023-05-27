#include<stdio.h>

main()

{
	int i,n,j=1;
	for (i=1;i<=5;i++)
	{
		for(n=1;n<=i;n++)
		{
			printf("%d ",j);
			j++;
		}
		printf("\n");
	}	
}
