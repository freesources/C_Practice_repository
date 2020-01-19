#include <stdio.h>
#define MAX 100

void nhap(int a[],int n) 
{
    int i;
    for (i=0;i<n;i++) 
	{
        printf("Nhap a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}

void ktsnt(int a[], int n)
{
	int i,j,kt;
	printf("\n\nCac so nguyen to trong mang la:\t");
	for (i=0;i<n;i++)
	{
		kt=0; 
		for (j=2;j<a[i];j++)
			{
				if (a[i]%j==0)
				kt=kt+1;
			}
				if (kt==0)
					{printf("%d\t",a[i]);
					}
	}
}

void chanle(int a[],int n) 
{
    int i,j;
    printf("\n\nCac so chan trong mang la:\t");
    for (i=0;i<n;i++) 
	{	
		if (a[i]%2==0)
        printf("%d\t",a[i]);    
    }
    printf("\n\nCac so le trong mang la:\t");
    for (j=0;j<n;j++)
    {
	if (a[j]%2!=0)
    printf("%d\t",a[j]);
	}
}

void main()
{
	int n, a[MAX];
	printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
	nhap(a,n);
	chanle(a,n);
	ktsnt(a,n);
}

