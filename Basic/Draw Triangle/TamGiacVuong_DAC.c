#include <stdio.h>
void main()
{
	int n,i,j,l,k;
	
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Chon loai ma tran muon hien thi: \n");
	printf("1. Ma tran tam giac tren trai\n");
	printf("2. Ma tran tam giac tren phai\n");
	printf("3. Ma tran tam giac duoi trai\n");
	printf("4. Ma tran tam giac duoi phai\n");
	scanf("%d",&l);
	
	for (i=0;i<n;i++)
	{
			if (l==1)
			{
			for (j=i;j<n;j++)
			printf(" *");
			printf("\n");
			}
			else if (l==2)
			{
			for (j=0;j<i;j++)	printf("  ");
			for (k=0;k<n-i;k++)	printf("* ");
			printf("\n");
			}
			else if (l==3)
			{
			for (j=n-i-1;j<n;j++)
			printf(" *");
			printf("\n");
			}		
			else if (l==4)
			{
			for (j=0;j<n-i;j++)	printf("  ");
			for (k=0;k<=i;k++)	printf("* ");
			printf("\n");
			}	
		}
	}
