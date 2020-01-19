#include <stdio.h>

int *contross(int[],int,int);
int *chepmang(int *,int [],int);
void xuatmang(int [],int);
void xuatmangsau(int [],int);

void main()
{
	int i,n,gtktra=1,*ct,nct;
	int daysn[]={2,3,7,1,5,0,8,1,7};
	n=sizeof(daysn)/sizeof(daysn[0]);
	xuatmang(daysn,n);
	while (ct=contross(daysn,n,gtktra)){
		nct=n-(ct-daysn);
		ct=chepmang(ct,ct+1,nct);
		n--;
	}
	printf("\n_________________________________________________\n");
	xuatmangsau(daysn,n);
	
}

int *contross(int src[], int n, int gtss){
	int *ctr=src;
	for(;*ctr!=gtss;ctr++)
	if (ctr-src==n-1)	return 0;
	return ctr;
}

void xuatmang(int src[], int n){
	int i=0;
	while (i++<n)
	printf("truoc[%d]: %d\t",i,*src++);
}

void xuatmangsau(int src[], int n){
	int i=0;
	while (i++<n)
	printf("sau[%d]: %d\t",i,*src++);
}

int *chepmang(int *dest, int src[], int n)
{
	int *dtr=dest, *str=src;
	while (str-src<n) *dtr++=*str++;
	return dest;
}
