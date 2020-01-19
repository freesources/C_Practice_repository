#include <stdio.h>
#include <math.h>

const int MAX=1000;
int count=0;
int snt[10000001];

void main()
{	
long i,j;
	for (i=1;i<=MAX;i++)
	snt[i]=1;
	snt[1]=0;
	i=2;
	while (i<=sqrt(MAX))
	{
		while (snt[i]==0)	i++;
		for(j=2;j<=MAX/i;j++)
			snt[i*j]=0;
			i++;
	}
	long k;
	for(k=1;k<=MAX;k++);
	if (snt[k]) count++;
	printf("%d",count);
}
