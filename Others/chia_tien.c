#include <stdio.h>
#include <math.h>
#define SLT 11

void main()
{
	int CS[SLT]={500000,200000,100000,50000,20000,10000,5000,2000,1000,500,200};
	int KQ[11];
	int M;
	int i,j;
	
	printf("Amount of money do you have: "); scanf("%d",&M);
	printf("\nResult after divide \n\n");
	printf("Have: \n");
	for (i=0;i<(strlen(CS)-1);i++)
	{
		KQ[i]=M/CS[i];
		M=M%CS[i];
	}
	KQ[10]=M/CS[10];
	for (j=0;j<11;j++)
	{
		printf("\t\t- %d: %d VND\n",KQ[j],CS[j]);
	}
}
