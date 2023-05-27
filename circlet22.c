#include<stdio.h>

main()

{
	char i,j;
	for(i='A';j<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
}
