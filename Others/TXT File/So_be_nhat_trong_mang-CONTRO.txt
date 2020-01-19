#include <stdio.h>

int chisoNN(int mang[], int nptu);
int *controNN(int mang[], int nptu);
void main()
{
	int i,n,*ct;
	int daysn[]={3,4,7,8,1,1000,7};
	n=sizeof(daysn)/sizeof(daysn[0]);
	i=chisoNN(daysn,n);
	ct=controNN(daysn,n);
	printf("\nSo nho nhat %d ?? %d", daysn[i],*ct);
	printf("\nTai dia chi: 0x%x ?? 0x%x",&daysn[i],ct);
}

int chisoNN(int src[], int n)
{
	int i=1; int cs=0;
	while (i<n)
	{
		if (src[i]<src[cs]) cs=i;
		i++;
	}
	return cs;
}


int *controNN(int src[], int n)
{
	int i=1, cs=0;
	while (i<n)
	{
		if (src[i]<src[cs]) cs=i;
		i++;
	}
	return &src[cs];
}

//cach 2:
//int *controNN2(int src[],int n)
//{
//	int i=0, cs=0;
//	while (++i<n)
//	{
//		if (src[i]<src[cs]) cs=i;
////		i++;
//	}
//	return &src[cs];
//}

//cach 3:
//int *controNN(int src[], int n)
//{
//	int *cnn=src, *ctr=cnn;
//	while (++ctr-src<n)
//	if (*ctr<*cnn) cnn=ctr;
//	return cnn;
//}
