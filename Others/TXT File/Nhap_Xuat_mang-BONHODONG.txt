#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int *themptu(int *day, int *n, int ptu)
{
	int *tam;
	tam=(int *)realloc(day,++(*n)*sizeof(int));
	if(tam) tam[*n-1]=ptu;
	return tam;
}

int *nhapmang(int *n)
{
	int *tam, *day=NULL, ptu;
	*n=0;
	while(scanf("%d",&ptu)) {
		tam=themptu(day,n,ptu);
		if(tam) day=tam;
	}
	return day;
}

int *nhapmangp(int *n)
{
	int *tam, i;
	printf("Nhap so ptu day so nguyen: "); 
	scanf("%d",n);
	if(*n<=0) return NULL;
	tam=(int *)calloc(*n,sizeof(int));
	printf("Nhap ptu day: \n");
	if(tam)
	{
		for(i=0;i<*n;i++)
			scanf("%d",tam+i);
	}
	return tam;
}

void xuatmang(int a[], int n)
{	int i;
	for(i=0;i<n;i++)	printf("%d ",a[i]);
}

void main()
{
	int *a, n;
	printf("Nhap END de ket thuc: \n\n");
	a=nhapmang(&n);
	if(a){
			printf("\nSo phan tu da nhap: %d\n",n);
			xuatmang(a,n);
			free(a);
	}
}
