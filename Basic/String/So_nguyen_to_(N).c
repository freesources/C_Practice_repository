#include <stdio.h>
#include <malloc.h>

void snt(int n)
{
	long i,kt,nt,s;
	nt=0;
	for (s=2;s<=n;s++)
	{	kt=0;
		for (i=2;i<s;i++)
		{
			if (s%i==0)
			kt=kt+1;
		}
			if (kt==0)
		//	{
//				printf("%d\t",s);
				nt=nt+1;
//			}
	}
	printf("\nCo %d so nguyen to!",nt);
}

void main()
{
	long n; 
	printf("Nhap vao N: "); scanf("%d",&n);
	n=(int*)malloc(n* sizeof(int));
	snt(n);
	free(n);
}
