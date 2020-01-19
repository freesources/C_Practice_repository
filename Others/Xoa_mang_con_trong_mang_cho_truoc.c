#include<stdio.h>

void xuatmang(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
}

void xoaptu(int x[],int n,int del, int *k)
{
	int i,j;	for (i=0;i<n;i++)
	{
		if(x[i]==del) {
		for(j=i;j<n;j++)
		{
		x[j]=x[j+1];}
		i--;
		n--;
	}
	*k=n;
	}
}

void main()
{
	int mang[]={1,2,2,4,6,10,15,15,17,20,15,35,4,3,2,1};
	int n,m;
	int k,i;
	int xoa[]={2,4,5};
	n=sizeof(mang)/sizeof(mang[0]);
	m=sizeof(xoa)/sizeof(xoa[0]);
	for (i=0;i<m;i++)
	{xoaptu(mang,n,xoa[i],&k);
	n=k;}
	xuatmang(mang,k);
}
