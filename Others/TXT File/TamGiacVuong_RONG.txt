#include <stdio.h>
void main()
{
	int n,i,j,l;
	
	printf("Nhap so canh tam giac muon hien thi: ");
	scanf("%d",&n);
	printf("Chon loai ma tran muon hien thi: \n");
	printf("1. Ma tran tam giac tren trai\n");
	printf("2. Ma tran tam giac tren phai\n");
	printf("3. Ma tran tam giac duoi trai\n");
	printf("4. Ma tran tam giac duoi phai\n");
	
	scanf("%d",&l);
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (l==1)
			{
				if (i==0||j==0||i==n-j-1)
				printf(" *");
				else
				printf("  ");
				
			}
				else if (l==2)
			{
				if (i==0||j==n-1||i==j)
				printf(" *");
				else
				printf("  ");	
			}
				else if (l==3)
			{
				if (i==j||j==0||i==n-1)
				printf(" *");
				else
				printf("  ");	
			}
				else if (l==4)
			{
				if (j==n-1||i==n-1||i==n-j-1)
				printf(" *");
				else
				printf("  ");	
			}
		}
		printf("\n");
	}
}
